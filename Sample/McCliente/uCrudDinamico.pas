unit uCrudDinamico;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Vcl.StdCtrls, Vcl.Grids, Vcl.DBGrids, Vcl.ExtCtrls,
  FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Param, FireDAC.Stan.Error, FireDAC.DatS,
  FireDAC.Phys.Intf, FireDAC.DApt.Intf, FireDAC.Comp.DataSet, FireDAC.Comp.Client, uMcMemTable,
  Vcl.Buttons, Vcl.DBCtrls, Vcl.ExtDlgs, uMcCache;

type
  TF_CrudDinamico = class(TForm)
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
    edt_Pesquisa: TEdit;
    cbx_Pesquisa: TComboBox;
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
  F_CrudDinamico: TF_CrudDinamico;

implementation

{$R *.dfm}

uses uDM, Vcl.Imaging.jpeg, Vcl.Imaging.pngimage;

{ TF_CrudBase }

procedure TF_CrudDinamico.btn_ClearImgClick(Sender: TObject);
begin
  if DataSource.DataSet.State in dsEditModes then
    TBlobField(DBImage.DataSource.DataSet.FieldByName(DBImage.DataField)).Clear;
end;

procedure TF_CrudDinamico.btn_CommitUpdatesClick(Sender: TObject);
begin
  if McCache.UpdatePending then
  begin
    if McCache.CommitUpdates then
      ShowMessage('Comitado com sucesso..')
    else
      ShowMessage('Deu error ao tentar commitar..');
  end;
end;

procedure TF_CrudDinamico.btn_LoadImgClick(Sender: TObject);
begin
  if DataSource.DataSet.State in dsEditModes then
  begin
    if OpenPictureDialog.Execute then
      TBlobField(DBImage.DataSource.DataSet.FieldByName(DBImage.DataField)).LoadFromFile(OpenPictureDialog.FileName);
  end;
end;

procedure TF_CrudDinamico.btn_PendenciaClick(Sender: TObject);
begin
  if McCache.UpdatePending then
    ShowMessage('Sim existe pendências..')
  else
    ShowMessage('Não existe pendências..');
end;

procedure TF_CrudDinamico.btn_QtdPendentesClick(Sender: TObject);
begin
  if McCache.UpdatePending then
    ShowMessage(Format('Quantidades pendentes -> %d', [McCache.CacheCount]))
  else
    ShowMessage('Não existe pendências..');
end;

procedure TF_CrudDinamico.Button1Click(Sender: TObject);
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
      //SQL Dinâmico & Parametros Dinâmico
      McMemTable.SQL.Clear;

      McMemTable.SQL.Add('SELECT *       ');
      McMemTable.SQL.Add('FROM produto   ');
      case cbx_Pesquisa.ItemIndex of
        0: begin
             McMemTable.SQL.Add('WHERE id = :id ');
             McMemTable.Params[0].AsInteger := StrToIntDef(edt_Pesquisa.Text, 0);
           end;
        1: begin
             McMemTable.SQL.Add('WHERE UPPER(descricao) LIKE :descricao ');
             McMemTable.Params[0].AsString := UpperCase(edt_Pesquisa.Text);
           end;
      end;

      McMemTable.SQL.Add('ORDER BY ID DESC');
      ///////////////
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

procedure TF_CrudDinamico.Button2Click(Sender: TObject);
begin
  McCache.Clear;
end;

class procedure TF_CrudDinamico.Execute;
begin
  F_CrudDinamico := TF_CrudDinamico.Create(nil);
  try
    F_CrudDinamico.ShowModal;
  finally
    FreeAndNil(F_CrudDinamico);
  end;
end;

procedure TF_CrudDinamico.FormCreate(Sender: TObject);
begin
  McMemTable.Connection := DM.McConnection;
  McCache.Connection := DM.McConnection;
end;

end.
