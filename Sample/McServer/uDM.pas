unit uDM;

interface

uses
  System.SysUtils, System.Classes, FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Error,
  FireDAC.UI.Intf, FireDAC.Phys.Intf, FireDAC.Stan.Def, FireDAC.Stan.Pool, FireDAC.Stan.Async,
  FireDAC.Phys, FireDAC.Phys.FB, FireDAC.Phys.FBDef, FireDAC.ConsoleUI.Wait, FireDAC.Phys.IBBase,
  Data.DB, FireDAC.Comp.Client, FireDAC.DApt, uMcServer, uMcDriverBase, uMcDriverFireDAC;

type
  TDM = class(TDataModule)
    FDConnection: TFDConnection;
    FDPhysFBDriverLink: TFDPhysFBDriverLink;
    McDriverFireDAC: TMcDriverFireDAC;
    McServer: TMcServer;
    procedure DataModuleDestroy(Sender: TObject);
    procedure DataModuleCreate(Sender: TObject);
  private
    { Private declarations }
  public
    function Produtos: string;
  end;

var
  DM: TDM;

implementation

{%CLASSGROUP 'System.Classes.TPersistent'}

{$R *.dfm}

uses uMcConverter;

procedure TDM.DataModuleCreate(Sender: TObject);
begin
  {$ifdef Win32}
  FDPhysFBDriverLink.VendorLib := 'C:\Windows\SysWOW64\FBCLIENT.DLL';
  {$else}
  FDPhysFBDriverLink.VendorLib := 'C:\Windows\System32\FBCLIENT.DLL';
  {$endif}
end;

procedure TDM.DataModuleDestroy(Sender: TObject);
begin
  FDConnection.Close;
end;

function TDM.Produtos: string;
var
  lQry: TFDQuery;
begin
  try
    lQry := TFDQuery.Create(nil);
    try
      lQry.Connection := FDConnection;
      lQry.SQL.Add('SELECT * FROM produto_teste ORDER BY id');
      lQry.Open;

      Result := TMcConverter.Load(lQry).ToJSONArray.Stringify;
    finally
      lQry.Close;
      FreeAndNil(lQry);
    end;
  except
    on E:exception do
      Result := E.Message;
  end;
end;

end.
