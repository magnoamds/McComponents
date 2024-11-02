object DM: TDM
  OnCreate = DataModuleCreate
  OnDestroy = DataModuleDestroy
  Height = 361
  Width = 548
  object FDConnection: TFDConnection
    Params.Strings = (
      
        'Database=D:\Magno_Componentes\Github\McComponents\Sample\Databas' +
        'e\DB_DADOS_FB4.FDB'
      'User_Name=SYSDBA'
      'Password=masterkey'
      'DriverID=FB')
    ConnectedStoredUsage = []
    LoginPrompt = False
    Left = 80
    Top = 64
  end
  object FDPhysFBDriverLink: TFDPhysFBDriverLink
    VendorLib = 'C:\Windows\SysWOW64\FBCLIENT.DLL'
    Left = 208
    Top = 64
  end
end
