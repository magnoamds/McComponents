object F_CrudBase: TF_CrudBase
  Left = 0
  Top = 0
  Caption = 'CRUD Base'
  ClientHeight = 546
  ClientWidth = 718
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 17
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 718
    Height = 81
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 0
    object lbl_Record: TLabel
      Left = 480
      Top = 32
      Width = 70
      Height = 17
      Caption = 'Record(s): 0'
    end
    object Button1: TButton
      Left = 32
      Top = 24
      Width = 90
      Height = 35
      Caption = 'Open/Close'
      TabOrder = 0
      OnClick = Button1Click
    end
    object DBNavigator1: TDBNavigator
      Left = 168
      Top = 28
      Width = 240
      Height = 25
      DataSource = DataSource
      TabOrder = 1
    end
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 81
    Width = 718
    Height = 465
    Align = alClient
    DataSource = DataSource
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -13
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object DataSource: TDataSource
    DataSet = McMemTable
    Left = 80
    Top = 176
  end
  object McMemTable: TMcMemTable
    ActiveStoredUsage = []
    FieldDefs = <
      item
        Name = 'ID'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'CODIGO_BARRAS'
        DataType = ftString
        Size = 14
      end
      item
        Name = 'DESCRICAO'
        Attributes = [faRequired]
        DataType = ftString
        Size = 100
      end
      item
        Name = 'ID_UND'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'ID_GRUPO'
        Attributes = [faRequired]
        DataType = ftInteger
      end
      item
        Name = 'QTD_MINIMA'
        DataType = ftFMTBcd
        Precision = 18
        Size = 3
      end
      item
        Name = 'QTD_MAXIMA'
        DataType = ftFMTBcd
        Precision = 18
        Size = 3
      end
      item
        Name = 'QTD_ESTOQUE'
        DataType = ftFMTBcd
        Precision = 18
        Size = 3
      end
      item
        Name = 'VALOR_CUSTO'
        DataType = ftFMTBcd
        Precision = 18
        Size = 2
      end
      item
        Name = 'VALOR_VENDA'
        DataType = ftFMTBcd
        Precision = 18
        Size = 2
      end
      item
        Name = 'OBS'
        DataType = ftMemo
      end
      item
        Name = 'PHOTO'
        DataType = ftBlob
      end
      item
        Name = 'ATIVO'
        DataType = ftSmallint
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
      'SELECT *'
      ' FROM produto '
      'ORDER BY id DESC')
    Left = 184
    Top = 176
  end
end
