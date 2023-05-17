object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Converte Romanos'
  ClientHeight = 147
  ClientWidth = 244
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 244
    Height = 147
    Align = alClient
    TabOrder = 0
    ExplicitLeft = 48
    ExplicitTop = 64
    ExplicitWidth = 185
    ExplicitHeight = 41
    object SpeedButton1: TSpeedButton
      Left = 145
      Top = 1
      Width = 98
      Height = 29
      Align = alRight
      Caption = 'Converter'
      OnClick = SpeedButton1Click
      ExplicitLeft = 135
      ExplicitTop = 9
      ExplicitHeight = 22
    end
    object Edit1: TEdit
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 121
      Height = 23
      Align = alLeft
      TabOrder = 0
      TextHint = 'Algarismo Romano'
      ExplicitLeft = 8
      ExplicitTop = 8
    end
    object Memo1: TMemo
      Left = 1
      Top = 30
      Width = 242
      Height = 116
      Align = alBottom
      TabOrder = 1
    end
  end
end
