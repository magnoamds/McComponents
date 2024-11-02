unit App.Router;

interface

uses
  System.Classes, System.SysUtils, Horse;

type
  TAppRouter = class
  public
    class procedure Load();
  end;

implementation

{ TAppRouter }

uses uDM;

class procedure TAppRouter.Load;
begin
  THorse.Get('/',
    procedure(AReq: THorseRequest; ARes: THorseResponse)
    begin
      ARes.ContentType('text/html')
          .Send(Format('<h1>HcServer On-Line - Horse version %s</h1>', [THorse.Version]));
    end);

  THorse.Get('/produtos',
    procedure(AReq: THorseRequest; ARes: THorseResponse)
    begin
      ARes.ContentType('application/json')
          .Send(DM.Produtos());
    end);
end;

end.
