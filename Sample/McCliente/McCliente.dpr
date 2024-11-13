program McCliente;

uses
  Vcl.Forms,
  uMain in 'uMain.pas' {F_Main},
  uDM in 'uDM.pas' {DM: TDataModule},
  uCrudDinamico in 'uCrudDinamico.pas' {F_CrudDinamico},
  uMestreDetalhe in 'uMestreDetalhe.pas' {F_MestreDetalhe},
  uCrudBase in 'uCrudBase.pas' {F_CrudBase};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TF_Main, F_Main);
  Application.Run;
end.
