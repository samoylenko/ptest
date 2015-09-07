object frmAsk: TfrmAsk
  Left = 205
  Top = 48
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1055#1088#1086#1074#1077#1088#1082#1072' '#1079#1085#1072#1085#1080#1081' :: PTest v1.0'
  ClientHeight = 434
  ClientWidth = 424
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 8
    Top = 395
    Width = 409
    Height = 1
  end
  object Label4: TLabel
    Left = 8
    Top = 400
    Width = 14
    Height = 13
    Caption = 'pm'
  end
  object GroupBox2: TGroupBox
    Left = 5
    Top = -1
    Width = 412
    Height = 386
    TabOrder = 0
    object Label1: TLabel
      Left = 17
      Top = 17
      Width = 43
      Height = 13
      Caption = #1057#1090#1091#1076#1077#1085#1090':'
    end
    object Label2: TLabel
      Left = 12
      Top = 72
      Width = 48
      Height = 13
      Caption = #1055#1088#1077#1076#1084#1077#1090':'
    end
    object Label3: TLabel
      Left = 22
      Top = 43
      Width = 38
      Height = 13
      Caption = #1043#1088#1091#1087#1087#1072':'
    end
    object Panel1: TPanel
      Left = 8
      Top = 182
      Width = 393
      Height = 195
      TabOrder = 0
      object GroupBox1: TGroupBox
        Left = 8
        Top = 5
        Width = 377
        Height = 180
        Caption = #1054#1090#1074#1077#1090':'
        TabOrder = 0
        object ans1: TRadioButton
          Left = 8
          Top = 32
          Width = 17
          Height = 17
          TabOrder = 0
          OnClick = Answer1Click
        end
        object ans2: TRadioButton
          Left = 8
          Top = 83
          Width = 17
          Height = 17
          TabOrder = 1
          OnClick = Answer2Click
        end
        object ans3: TRadioButton
          Left = 8
          Top = 139
          Width = 17
          Height = 17
          TabOrder = 2
          OnClick = Answer3Click
        end
        object Answer1: TMemo
          Left = 24
          Top = 16
          Width = 345
          Height = 49
          Cursor = crHandPoint
          Lines.Strings = (
            'Answer1'
            '2'
            '3')
          ParentColor = True
          ReadOnly = True
          ScrollBars = ssVertical
          TabOrder = 3
          OnClick = Answer1Click
        end
        object Answer2: TMemo
          Left = 24
          Top = 69
          Width = 345
          Height = 49
          Cursor = crHandPoint
          Lines.Strings = (
            'Answer2'
            '2'
            '3')
          ParentColor = True
          ReadOnly = True
          ScrollBars = ssVertical
          TabOrder = 4
          OnClick = Answer2Click
        end
        object Answer3: TMemo
          Left = 24
          Top = 123
          Width = 345
          Height = 49
          Cursor = crHandPoint
          Lines.Strings = (
            'Answer3'
            '2'
            '3')
          ParentColor = True
          ReadOnly = True
          ScrollBars = ssVertical
          TabOrder = 5
          OnClick = Answer3Click
        end
      end
    end
    object edtG: TEdit
      Left = 64
      Top = 40
      Width = 337
      Height = 21
      TabStop = False
      ParentColor = True
      ReadOnly = True
      TabOrder = 1
      Text = 'edtG'
    end
  end
  object edtS: TEdit
    Left = 69
    Top = 12
    Width = 337
    Height = 21
    TabStop = False
    ParentColor = True
    ReadOnly = True
    TabOrder = 4
    Text = 'edtS'
    OnKeyPress = edtSKeyPress
  end
  object edtD: TEdit
    Left = 69
    Top = 68
    Width = 337
    Height = 21
    TabStop = False
    ParentColor = True
    ReadOnly = True
    TabOrder = 5
    Text = 'edtD'
  end
  object gbQ: TGroupBox
    Left = 13
    Top = 92
    Width = 393
    Height = 85
    Caption = #1042#1086#1087#1088#1086#1089
    TabOrder = 6
    object DBMemo1: TDBMemo
      Left = 8
      Top = 16
      Width = 377
      Height = 57
      TabStop = False
      DataField = 'QUESTION'
      DataSource = dmTest.dsAsk
      ParentColor = True
      ReadOnly = True
      ScrollBars = ssVertical
      TabOrder = 0
    end
  end
  object btnFwd: TBitBtn
    Left = 261
    Top = 403
    Width = 75
    Height = 25
    Caption = #1042#1087#1077#1088#1077#1076
    Default = True
    TabOrder = 1
    OnClick = btnFwdClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      3333333333333333333333333333333333333333333333333333333333333333
      3333333333333333333333333333333333333333333FF3333333333333003333
      3333333333773FF3333333333309003333333333337F773FF333333333099900
      33333FFFFF7F33773FF30000000999990033777777733333773F099999999999
      99007FFFFFFF33333F7700000009999900337777777F333F7733333333099900
      33333333337F3F77333333333309003333333333337F77333333333333003333
      3333333333773333333333333333333333333333333333333333333333333333
      3333333333333333333333333333333333333333333333333333}
    NumGlyphs = 2
  end
  object btnFinish: TBitBtn
    Left = 341
    Top = 403
    Width = 75
    Height = 25
    Caption = #1043#1086#1090#1086#1074#1086
    Enabled = False
    TabOrder = 2
    OnClick = btnFinishClick
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00555555555555
      555555555555555555555555555555555555555555FF55555555555559055555
      55555555577FF5555555555599905555555555557777F5555555555599905555
      555555557777FF5555555559999905555555555777777F555555559999990555
      5555557777777FF5555557990599905555555777757777F55555790555599055
      55557775555777FF5555555555599905555555555557777F5555555555559905
      555555555555777FF5555555555559905555555555555777FF55555555555579
      05555555555555777FF5555555555557905555555555555777FF555555555555
      5990555555555555577755555555555555555555555555555555}
    NumGlyphs = 2
  end
  object pbTime: TProgressBar
    Left = 56
    Top = 403
    Width = 198
    Height = 25
    Min = 0
    Max = 29
    Position = 29
    Smooth = True
    Step = -1
    TabOrder = 3
  end
  object Time: TTimer
    OnTimer = TimeTimer
    Left = 109
    Top = 403
  end
end
