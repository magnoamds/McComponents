program McCliente;

uses
  Vcl.Forms,
  uMain in 'uMain.pas' {F_Main},
  uDM in 'uDM.pas' {DM: TDataModule},
  uCrudBase in 'uCrudBase.pas' {F_CrudBase},
  uMestreDetalhe in 'uMestreDetalhe.pas' {F_MestreDetalhe};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TF_Main, F_Main);
  Application.Run;
end.
