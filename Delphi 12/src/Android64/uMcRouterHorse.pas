unit uMcRouterHorse;

{$IFDEF FPC}
  {$MODE Delphi}{$H+}
{$ENDIF}

interface

uses
  {$IFDEF FPC}
  SysUtils,
  {$ELSE}
  System.SysUtils,
  {$ENDIF}
  Horse,
  uMcServer;

type
  TMcRouterHorse = class
  private
    class var FServer: TMcServer;
  public
    class procedure Load(const AName: string; const AServer: TMcServer);
  end;

implementation

{ TMcRouterHorse }

procedure OnResource(AReq: THorseRequest; ARes: THorseResponse);
begin
  try
    if AReq.ContentType.ToLower.Equals('text/html') then
      ARes.Send(TMcRouterHorse.FServer.Resource(AReq.Body))
    else
      ARes.SendFile(TMcRouterHorse.FServer.Resource(AReq.ContentFields.Field('mcdata').AsStream));
  except
    on E: exception do
      ARes.Send(E.Message);
  end;
end;

class procedure TMcRouterHorse.Load(const AName: string; const AServer: TMcServer);
begin
  Self.FServer := AServer;
  THorse.Post(AName, OnResource);
end;

end.
