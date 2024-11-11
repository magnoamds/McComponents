unit uMain;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls;

type
  TF_Main = class(TForm)
    Button1: TButton;
    btn_MestreDetalhe: TButton;
    procedure FormCreate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure btn_MestreDetalheClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  F_Main: TF_Main;

implementation

{$R *.dfm}

uses uDM, uCrudBase, uMestreDetalhe;

procedure TF_Main.btn_MestreDetalheClick(Sender: TObject);
begin
  TF_MestreDetalhe.Execute();
end;

procedure TF_Main.Button1Click(Sender: TObject);
begin
  TF_CrudBase.Execute();
end;

procedure TF_Main.FormCreate(Sender: TObject);
begin
  Application.CreateForm(TDM, DM);
end;

end.
