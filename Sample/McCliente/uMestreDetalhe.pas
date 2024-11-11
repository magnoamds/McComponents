unit uMestreDetalhe;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Vcl.Grids, Vcl.DBGrids, Vcl.ExtCtrls, Vcl.Buttons,
  Vcl.DBCtrls, Vcl.StdCtrls, FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Param,
  FireDAC.Stan.Error, FireDAC.DatS, FireDAC.Phys.Intf, FireDAC.DApt.Intf, FireDAC.Comp.DataSet,
  FireDAC.Comp.Client, uMcMemTable;

type
  TF_MestreDetalhe = class(TForm)
    pnl_Top: TPanel;
    dbg_Master: TDBGrid;
    dbg_Detail: TDBGrid;
    dsMaster: TDataSource;
    dsDetail: TDataSource;
    btn_OpenClose: TButton;
    DBNavigator1: TDBNavigator;
    pnl_Detail: TPanel;
    DBNavigator2: TDBNavigator;
    qryMaster: TMcMemTable;
    qryDetail: TMcMemTable;
    qryTipoContato: TMcMemTable;
    qryDetailID: TIntegerField;
    qryDetailID_PESSOA: TIntegerField;
    qryDetailID_TIPO: TIntegerField;
    qryDetailCONTATO: TStringField;
    qryDetailLKP_Tipo: TStringField;
    procedure FormResize(Sender: TObject);
    procedure btn_OpenCloseClick(Sender: TObject);
    procedure qryDetailNewRecord(DataSet: TDataSet);
    procedure qryMasterNewRecord(DataSet: TDataSet);
  private
    { Private declarations }
  public
    class procedure Execute;
  end;

var
  F_MestreDetalhe: TF_MestreDetalhe;

implementation

{$R *.dfm}

uses uDM;

procedure TF_MestreDetalhe.btn_OpenCloseClick(Sender: TObject);
begin
  if Assigned(dsMaster.DataSet) then
    dsMaster.DataSet.Active := not dsMaster.DataSet.Active;
end;

class procedure TF_MestreDetalhe.Execute;
begin
  F_MestreDetalhe := TF_MestreDetalhe.Create(nil);
  try
    F_MestreDetalhe.ShowModal;
  finally
    FreeAndNil(F_MestreDetalhe);
  end;
end;

procedure TF_MestreDetalhe.FormResize(Sender: TObject);
begin
  dbg_Detail.Height := Trunc((Self.ClientHeight - (pnl_Top.Height + pnl_Detail.Height)) / 2);
end;

procedure TF_MestreDetalhe.qryDetailNewRecord(DataSet: TDataSet);
begin
  DataSet.FieldByName('id').AsInteger := -1;

  //DataSet.FieldByName('id_pessoa').AsInteger := qryMaster.FieldByName('id').AsInteger;
  DataSet.FieldByName(qryDetail.DetailFields).AsInteger :=
    qryDetail.MasterSource.DataSet.FieldByName(qryDetail.MasterFields).AsInteger;
end;

procedure TF_MestreDetalhe.qryMasterNewRecord(DataSet: TDataSet);
begin
  DataSet.FieldByName('id').AsInteger := -1;
end;

end.
