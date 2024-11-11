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

uses uDM, uMcRouterHorse;

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

  TMcRouterHorse.Load('/resource', DM.McServer);

//  THorse.Post('/modotexto',
//    procedure(AReq: THorseRequest; ARes: THorseResponse)
//    begin
//      try
//        ARes.ContentType('text/html')
//            .Send( DM.McServer.Resource(AReq.Body) );
//      except
//        on E:exception do
//          ARes.ContentType('text/html')
//              .Status(500)
//              .Send(E.Message);
//      end;
//    end);
//
//  THorse.Post('/modobinario',
//    procedure(AReq: THorseRequest; ARes: THorseResponse)
//    begin
//      try
//        ARes.SendFile(DM.McServer.Resource(AReq.ContentFields.Field('mcdata').AsStream));
//      except
//        on E:exception do
//          ARes.ContentType('text/html')
//              .Status(500)
//              .Send(E.Message);
//      end;
//    end);
end;

end.
