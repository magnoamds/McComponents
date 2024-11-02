unit uDM;

interface

uses
  System.SysUtils, System.Classes, uMcConnection;

type
  TDM = class(TDataModule)
    McConnection: TMcConnection;
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  DM: TDM;

implementation

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

end.
