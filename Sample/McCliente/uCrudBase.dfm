object F_CrudBase: TF_CrudBase
  Left = 0
  Top = 0
  Caption = 'CRUD Base'
  ClientHeight = 546
  ClientWidth = 950
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  OnCreate = FormCreate
  TextHeight = 17
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 950
    Height = 89
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 0
    object lbl_Record: TLabel
      Left = 448
      Top = 11
      Width = 70
      Height = 17
      Caption = 'Record(s): 0'
    end
    object lbl_Tempo: TLabel
      Left = 448
      Top = 34
      Width = 75
      Height = 17
      Caption = 'Tempo: 0 ms'
    end
    object Button1: TButton
      Left = 16
      Top = 15
      Width = 90
      Height = 35
      Caption = 'Open/Close'
      TabOrder = 0
      OnClick = Button1Click
    end
    object DBNavigator1: TDBNavigator
      Left = 168
      Top = 19
      Width = 240
      Height = 25
      DataSource = DataSource
      TabOrder = 1
    end
    object Panel2: TPanel
      AlignWithMargins = True
      Left = 784
      Top = 3
      Width = 156
      Height = 83
      Margins.Right = 10
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 2
      object DBImage: TDBImage
        Left = 67
        Top = 0
        Width = 89
        Height = 83
        Align = alRight
        DataField = 'PHOTO'
        DataSource = DataSource
        Proportional = True
        TabOrder = 0
      end
      object btn_ClearImg: TButton
        Left = 3
        Top = 5
        Width = 58
        Height = 25
        Caption = 'Clear'
        TabOrder = 1
        OnClick = btn_ClearImgClick
      end
      object btn_LoadImg: TButton
        Left = 3
        Top = 53
        Width = 58
        Height = 25
        Caption = 'Load'
        TabOrder = 2
        OnClick = btn_LoadImgClick
      end
    end
    object DBMemo: TDBMemo
      Left = 596
      Top = 0
      Width = 185
      Height = 89
      Align = alRight
      DataField = 'OBS'
      DataSource = DataSource
      TabOrder = 3
    end
    object btn_Pendencia: TButton
      Left = 121
      Top = 58
      Width = 97
      Height = 25
      Caption = 'Tem Pend'#234'ncia'
      TabOrder = 4
      OnClick = btn_PendenciaClick
    end
    object btn_CommitUpdates: TButton
      Left = 224
      Top = 58
      Width = 97
      Height = 25
      Caption = 'Cache Commit'
      TabOrder = 5
      OnClick = btn_CommitUpdatesClick
    end
    object Button2: TButton
      Left = 327
      Top = 58
      Width = 97
      Height = 25
      Caption = 'Clear Cache'
      TabOrder = 6
      OnClick = Button2Click
    end
    object btn_QtdPendentes: TButton
      Left = 18
      Top = 58
      Width = 97
      Height = 25
      Caption = 'Pendentes'
      TabOrder = 7
      OnClick = btn_QtdPendentesClick
    end
    object cbx_UseHcCache: TCheckBox
      Left = 448
      Top = 62
      Width = 97
      Height = 17
      Caption = 'Use HcCache'
      TabOrder = 8
    end
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 89
    Width = 950
    Height = 457
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
    Cache.McCache = McCache
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
      ' FROM produto'
      'ORDER BY id DESC')
    Left = 184
    Top = 176
  end
  object OpenPictureDialog: TOpenPictureDialog
    Left = 544
    Top = 184
  end
  object McCache: TMcCache
    Connection = DM.McConnection
    Left = 320
    Top = 176
  end
end
