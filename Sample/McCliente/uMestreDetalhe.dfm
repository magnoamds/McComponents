object F_MestreDetalhe: TF_MestreDetalhe
  Left = 0
  Top = 0
  Caption = 'Mestre-Detalhe'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  OnResize = FormResize
  TextHeight = 15
  object pnl_Top: TPanel
    Left = 0
    Top = 0
    Width = 624
    Height = 65
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 0
    object btn_OpenClose: TButton
      Left = 32
      Top = 21
      Width = 75
      Height = 25
      Caption = 'Open/Close'
      TabOrder = 0
      OnClick = btn_OpenCloseClick
    end
    object DBNavigator1: TDBNavigator
      Left = 136
      Top = 20
      Width = 240
      Height = 25
      DataSource = dsMaster
      TabOrder = 1
    end
  end
  object dbg_Master: TDBGrid
    Left = 0
    Top = 65
    Width = 624
    Height = 158
    Align = alClient
    DataSource = dsMaster
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object dbg_Detail: TDBGrid
    Left = 0
    Top = 264
    Width = 624
    Height = 177
    Align = alBottom
    DataSource = dsDetail
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object pnl_Detail: TPanel
    Left = 0
    Top = 223
    Width = 624
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 3
    ExplicitLeft = 216
    ExplicitTop = 193
    ExplicitWidth = 185
    object DBNavigator2: TDBNavigator
      Left = 136
      Top = 6
      Width = 240
      Height = 25
      DataSource = dsDetail
      TabOrder = 0
    end
  end
  object dsMaster: TDataSource
    DataSet = qryMaster
    Left = 80
    Top = 136
  end
  object dsDetail: TDataSource
    DataSet = qryDetail
    Left = 80
    Top = 336
  end
  object qryMaster: TMcMemTable
    ActiveStoredUsage = []
    OnNewRecord = qryMasterNewRecord
    FieldDefs = <
      item
        Name = 'ID'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'CPF_CNPJ'
        DataType = ftString
        Size = 14
      end
      item
        Name = 'NOME_RAZAO'
        Attributes = [faRequired]
        DataType = ftString
        Size = 70
      end
      item
        Name = 'LOGRADOURO'
        DataType = ftString
        Size = 70
      end
      item
        Name = 'NUMERO'
        DataType = ftString
        Size = 10
      end
      item
        Name = 'BAIRRO'
        DataType = ftString
        Size = 35
      end
      item
        Name = 'CEP'
        Attributes = [faFixed]
        DataType = ftFixedChar
        Size = 8
      end
      item
        Name = 'MUNICIPIO'
        DataType = ftString
        Size = 35
      end
      item
        Name = 'UF'
        Attributes = [faFixed]
        DataType = ftFixedChar
        Size = 2
      end
      item
        Name = 'CREATED_AT'
        DataType = ftTimeStamp
      end
      item
        Name = 'UPDATED_AT'
        DataType = ftTimeStamp
      end>
    IndexDefs = <>
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    ResourceOptions.AssignedValues = [rvSilentMode]
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvCheckRequired, uvAutoCommitUpdates]
    UpdateOptions.CheckRequired = False
    UpdateOptions.AutoCommitUpdates = True
    StoreDefs = True
    Connection = DM.McConnection
    PrimaryKeys = <
      item
        AutoInc = True
        DataType = ftInteger
        Name = 'ID'
      end>
    Params = <>
    SQL.Strings = (
      'SELECT * FROM pessoa ORDER BY id')
    Left = 200
    Top = 136
  end
  object qryDetail: TMcMemTable
    ActiveStoredUsage = []
    OnNewRecord = qryDetailNewRecord
    FieldDefs = <
      item
        Name = 'ID'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'ID_PESSOA'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'ID_TIPO'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'CONTATO'
        Attributes = [faRequired]
        DataType = ftString
        Size = 50
      end>
    IndexDefs = <>
    MasterSource = dsMaster
    MasterFields = 'ID'
    DetailFields = 'ID_PESSOA'
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    ResourceOptions.AssignedValues = [rvSilentMode]
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvCheckRequired, uvAutoCommitUpdates]
    UpdateOptions.CheckRequired = False
    UpdateOptions.AutoCommitUpdates = True
    StoreDefs = True
    Connection = DM.McConnection
    PrimaryKeys = <
      item
        AutoInc = True
        DataType = ftInteger
        Name = 'ID'
      end>
    Params = <
      item
        DataType = ftInteger
        Name = 'id_pessoa'
        ParamType = ptUnknown
        Value = 1
      end>
    SQL.Strings = (
      'SELECT * FROM pessoa_contato'
      'WHERE id_pessoa = :id_pessoa')
    Left = 200
    Top = 336
    object qryDetailID: TIntegerField
      FieldName = 'ID'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object qryDetailID_PESSOA: TIntegerField
      FieldName = 'ID_PESSOA'
      Required = True
    end
    object qryDetailID_TIPO: TIntegerField
      FieldName = 'ID_TIPO'
      Required = True
    end
    object qryDetailLKP_Tipo: TStringField
      FieldKind = fkLookup
      FieldName = 'LKP_Tipo'
      LookupDataSet = qryTipoContato
      LookupKeyFields = 'ID'
      LookupResultField = 'DESCRICAO'
      KeyFields = 'ID_TIPO'
      Size = 35
      Lookup = True
    end
    object qryDetailCONTATO: TStringField
      FieldName = 'CONTATO'
      Required = True
      Size = 50
    end
  end
  object qryTipoContato: TMcMemTable
    ActiveStoredUsage = []
    Active = True
    FieldDefs = <
      item
        Name = 'ID'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'DESCRICAO'
        Attributes = [faRequired]
        DataType = ftString
        Size = 35
      end>
    IndexDefs = <>
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    ResourceOptions.AssignedValues = [rvSilentMode]
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvCheckRequired, uvAutoCommitUpdates]
    UpdateOptions.CheckRequired = False
    UpdateOptions.AutoCommitUpdates = True
    StoreDefs = True
    Connection = DM.McConnection
    PrimaryKeys = <
      item
        AutoInc = False
        DataType = ftInteger
        Name = 'ID'
      end>
    Params = <>
    SQL.Strings = (
      'SELECT * FROM tipo_contato ORDER BY id')
    Left = 360
    Top = 336
  end
end
