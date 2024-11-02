program McServer;

uses
  System.Classes,
  System.SysUtils,
  Horse,
  Horse.CORS,
  App.Router in 'App.Router.pas',
  uDM in 'uDM.pas' {DM: TDataModule};

begin
  DM := TDM.Create(nil);
  try
    THorse.Use(CORS);

    TAppRouter.Load();

    THorse.Listen(9095,
      procedure
      begin
        WriteLn(Format('HcServer active %s:%d', [THorse.Host, THorse.Port]));
      end);
  finally
    FreeAndNil(DM);
  end;
end.
