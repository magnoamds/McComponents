object F_Main: TF_Main
  Left = 0
  Top = 0
  Caption = 'McCliente'
  ClientHeight = 303
  ClientWidth = 495
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  OnCreate = FormCreate
  TextHeight = 15
  object Button1: TButton
    Left = 32
    Top = 32
    Width = 113
    Height = 35
    Caption = 'CRUD Base'
    TabOrder = 0
    OnClick = Button1Click
  end
  object btn_MestreDetalhe: TButton
    Left = 32
    Top = 73
    Width = 113
    Height = 35
    Caption = 'Mestre-Detalhe'
    TabOrder = 1
    OnClick = btn_MestreDetalheClick
  end
end
