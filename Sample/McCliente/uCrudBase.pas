unit uCrudBase;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Vcl.StdCtrls, Vcl.Grids, Vcl.DBGrids, Vcl.ExtCtrls,
  FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Param, FireDAC.Stan.Error, FireDAC.DatS,
  FireDAC.Phys.Intf, FireDAC.DApt.Intf, FireDAC.Comp.DataSet, FireDAC.Comp.Client, uMcMemTable,
  Vcl.Buttons, Vcl.DBCtrls;

type
  TF_CrudBase = class(TForm)
    Panel1: TPanel;
    DBGrid1: TDBGrid;
    DataSource: TDataSource;
    Button1: TButton;
    McMemTable: TMcMemTable;
    DBNavigator1: TDBNavigator;
    lbl_Record: TLabel;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    class procedure Execute();
  end;

var
  F_CrudBase: TF_CrudBase;

implementation

{$R *.dfm}

uses uDM;

{ TF_CrudBase }

procedure TF_CrudBase.Button1Click(Sender: TObject);
begin
  if (DataSource.DataSet <> nil) then
  begin
    lbl_Record.Caption := 'Record(s): 0';

    DataSource.DataSet.Active := not DataSource.DataSet.Active;

    if DataSource.DataSet.Active then
      lbl_Record.Caption := Format('Record(s): %s', [FormatFloat(',0',  DataSource.DataSet.RecordCount)]);
  end;
end;

class procedure TF_CrudBase.Execute;
begin
  F_CrudBase := TF_CrudBase.Create(nil);
  try
    F_CrudBase.ShowModal;
  finally
    FreeAndNil(F_CrudBase);
  end;
end;

end.
