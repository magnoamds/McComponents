unit uCrudBase;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Vcl.StdCtrls, Vcl.Grids, Vcl.DBGrids, Vcl.ExtCtrls,
  FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Param, FireDAC.Stan.Error, FireDAC.DatS,
  FireDAC.Phys.Intf, FireDAC.DApt.Intf, FireDAC.Comp.DataSet, FireDAC.Comp.Client, uMcMemTable,
  Vcl.Buttons, Vcl.DBCtrls, Vcl.ExtDlgs, uMcCache;

type
  TF_CrudBase = class(TForm)
    Panel1: TPanel;
    DBGrid1: TDBGrid;
    DataSource: TDataSource;
    Button1: TButton;
    McMemTable: TMcMemTable;
    DBNavigator1: TDBNavigator;
    lbl_Record: TLabel;
    lbl_Tempo: TLabel;
    Panel2: TPanel;
    DBImage: TDBImage;
    DBMemo: TDBMemo;
    OpenPictureDialog: TOpenPictureDialog;
    btn_ClearImg: TButton;
    btn_LoadImg: TButton;
    McCache: TMcCache;
    btn_Pendencia: TButton;
    btn_CommitUpdates: TButton;
    Button2: TButton;
    btn_QtdPendentes: TButton;
    cbx_UseHcCache: TCheckBox;
    procedure Button1Click(Sender: TObject);
    procedure btn_LoadImgClick(Sender: TObject);
    procedure btn_ClearImgClick(Sender: TObject);
    procedure btn_PendenciaClick(Sender: TObject);
    procedure btn_CommitUpdatesClick(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure btn_QtdPendentesClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    class procedure Execute();
  end;

var
  F_CrudBase: TF_CrudBase;

implementation

{$R *.dfm}

uses uDM, Vcl.Imaging.jpeg, Vcl.Imaging.pngimage;

{ TF_CrudBase }

procedure TF_CrudBase.btn_ClearImgClick(Sender: TObject);
begin
  if DataSource.DataSet.State in dsEditModes then
    TBlobField(DBImage.DataSource.DataSet.FieldByName(DBImage.DataField)).Clear;
end;

procedure TF_CrudBase.btn_CommitUpdatesClick(Sender: TObject);
begin
  if McCache.UpdatePending then
  begin
    if McCache.CommitUpdates then
      ShowMessage('Comitado com sucesso..')
    else
      ShowMessage('Deu error ao tentar commitar..');
  end;
end;

procedure TF_CrudBase.btn_LoadImgClick(Sender: TObject);
begin
  if DataSource.DataSet.State in dsEditModes then
  begin
    if OpenPictureDialog.Execute then
      TBlobField(DBImage.DataSource.DataSet.FieldByName(DBImage.DataField)).LoadFromFile(OpenPictureDialog.FileName);
  end;
end;

procedure TF_CrudBase.btn_PendenciaClick(Sender: TObject);
begin
  if McCache.UpdatePending then
    ShowMessage('Sim existe pend�ncias..')
  else
    ShowMessage('N�o existe pend�ncias..');
end;

procedure TF_CrudBase.btn_QtdPendentesClick(Sender: TObject);
begin
  if McCache.UpdatePending then
    ShowMessage(Format('Quantidades pendentes -> %d', [McCache.CacheCount]))
  else
    ShowMessage('N�o existe pend�ncias..');
end;

procedure TF_CrudBase.Button1Click(Sender: TObject);
var
  lInicio: Cardinal;
  lFim: Cardinal;
begin
  lbl_Record.Caption := 'Record(s): 0';
  lbl_Tempo.Caption := 'Tempo: 0 ms';

  if (DataSource.DataSet <> nil) then
  begin
    if not DataSource.DataSet.Active then
    begin
      lInicio := GetTickCount;
      DataSource.DataSet.Active := not DataSource.DataSet.Active;
      lFim := GetTickCount;

      lbl_Record.Caption := Format('Record(s): %s', [FormatFloat(',0',  DataSource.DataSet.RecordCount)]);
      lbl_Tempo.Caption := Format('Tempo: %s ms', [FormatFloat(',0', (lFim - lInicio))]);
      McMemTable.Cache.Active := cbx_UseHcCache.Checked;
    end
    else
      DataSource.DataSet.Active := not DataSource.DataSet.Active;
  end;
end;

procedure TF_CrudBase.Button2Click(Sender: TObject);
begin
  McCache.Clear;
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

procedure TF_CrudBase.FormCreate(Sender: TObject);
begin
  McMemTable.Connection := DM.McConnection;
  McCache.Connection := DM.McConnection;
end;

end.
