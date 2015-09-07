object frmEditor: TfrmEditor
  Left = 205
  Top = 157
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1056#1077#1076#1072#1082#1090#1086#1088' :: PTest v1.0'
  ClientHeight = 347
  ClientWidth = 536
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  ShowHint = True
  PixelsPerInch = 96
  TextHeight = 13
  object Bevel1: TBevel
    Left = 8
    Top = 320
    Width = 409
    Height = 1
  end
  object Label1: TLabel
    Left = 8
    Top = 323
    Width = 14
    Height = 13
    Caption = 'pm'
  end
  object PageControl1: TPageControl
    Left = 8
    Top = 8
    Width = 521
    Height = 305
    ActivePage = TabSheet1
    TabIndex = 0
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = #1057#1090#1091#1076#1077#1085#1090#1099
      object GroupBox1: TGroupBox
        Left = 8
        Top = 8
        Width = 201
        Height = 265
        Caption = #1043#1088#1091#1087#1087#1099
        TabOrder = 0
        object DBGrid1: TDBGrid
          Left = 8
          Top = 16
          Width = 177
          Height = 209
          DataSource = dmTest.dsG
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
        end
        object DBNavigator1: TDBNavigator
          Left = 8
          Top = 232
          Width = 180
          Height = 25
          DataSource = dmTest.dsG
          VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
          Hints.Strings = (
            #1053#1072#1095#1072#1083#1086
            #1053#1072#1079#1072#1076
            #1042#1087#1077#1088#1077#1076
            #1050#1086#1085#1077#1094
            #1042#1089#1090#1072#1074#1080#1090#1100
            #1059#1076#1072#1083#1080#1090#1100
            #1048#1089#1087#1088#1072#1074#1080#1090#1100
            #1055#1086#1076#1090#1074#1077#1088#1076#1080#1090#1100
            #1054#1090#1084#1077#1085#1080#1090#1100
            #1054#1073#1085#1086#1074#1080#1090#1100)
          TabOrder = 1
        end
      end
      object GroupBox2: TGroupBox
        Left = 216
        Top = 8
        Width = 289
        Height = 265
        Caption = #1057#1090#1091#1076#1077#1085#1090#1099
        TabOrder = 1
        object DBGrid2: TDBGrid
          Left = 8
          Top = 16
          Width = 273
          Height = 209
          DataSource = dmTest.dsS
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
        end
        object DBNavigator2: TDBNavigator
          Left = 8
          Top = 233
          Width = 270
          Height = 25
          DataSource = dmTest.dsS
          VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
          Hints.Strings = (
            #1053#1072#1095#1072#1083#1086
            #1053#1072#1079#1072#1076
            #1042#1087#1077#1088#1077#1076
            #1050#1086#1085#1077#1094
            #1042#1089#1090#1072#1074#1080#1090#1100
            #1059#1076#1072#1083#1080#1090#1100
            #1048#1089#1087#1088#1072#1074#1080#1090#1100
            #1055#1086#1076#1090#1074#1077#1088#1076#1080#1090#1100
            #1054#1090#1084#1077#1085#1080#1090#1100
            #1054#1073#1085#1086#1074#1080#1090#1100)
          TabOrder = 1
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = #1044#1080#1089#1094#1080#1087#1083#1080#1085#1099
      ImageIndex = 1
      object GroupBox3: TGroupBox
        Left = 8
        Top = 8
        Width = 193
        Height = 257
        Caption = #1044#1080#1089#1094#1080#1087#1083#1080#1085#1099
        TabOrder = 0
        object DBNavigator3: TDBNavigator
          Left = 8
          Top = 224
          Width = 180
          Height = 25
          DataSource = dmTest.dsD
          VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
          Hints.Strings = (
            #1053#1072#1095#1072#1083#1086
            #1053#1072#1079#1072#1076
            #1042#1087#1077#1088#1077#1076
            #1050#1086#1085#1077#1094
            #1042#1089#1090#1072#1074#1080#1090#1100
            #1059#1076#1072#1083#1080#1090#1100
            #1048#1089#1087#1088#1072#1074#1080#1090#1100
            #1055#1086#1076#1090#1074#1077#1088#1076#1080#1090#1100
            #1054#1090#1084#1077#1085#1080#1090#1100
            #1054#1073#1085#1086#1074#1080#1090#1100)
          TabOrder = 0
        end
        object DBGrid3: TDBGrid
          Left = 8
          Top = 16
          Width = 177
          Height = 201
          DataSource = dmTest.dsD
          TabOrder = 1
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
        end
      end
      object GroupBox4: TGroupBox
        Left = 208
        Top = 8
        Width = 297
        Height = 257
        Caption = #1042#1086#1087#1088#1086#1089#1099
        TabOrder = 1
        object DBNavigator4: TDBNavigator
          Left = 8
          Top = 224
          Width = 279
          Height = 25
          DataSource = dmTest.dsAsk
          VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
          Hints.Strings = (
            #1053#1072#1095#1072#1083#1086
            #1053#1072#1079#1072#1076
            #1042#1087#1077#1088#1077#1076
            #1050#1086#1085#1077#1094
            #1042#1089#1090#1072#1074#1080#1090#1100
            #1059#1076#1072#1083#1080#1090#1100
            #1048#1089#1087#1088#1072#1074#1080#1090#1100
            #1055#1086#1076#1090#1074#1077#1088#1076#1080#1090#1100
            #1054#1090#1084#1077#1085#1080#1090#1100
            #1054#1073#1085#1086#1074#1080#1090#1100)
          TabOrder = 0
        end
        object DBGrid4: TDBGrid
          Left = 8
          Top = 16
          Width = 281
          Height = 201
          DataSource = dmTest.dsAsk
          TabOrder = 1
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
        end
      end
    end
    object TabSheet3: TTabSheet
      Caption = #1060#1086#1088#1084#1072
      ImageIndex = 2
      object GroupBox5: TGroupBox
        Left = 8
        Top = 8
        Width = 497
        Height = 257
        TabOrder = 0
        object Label2: TLabel
          Left = 8
          Top = 10
          Width = 40
          Height = 13
          Caption = #1042#1086#1087#1088#1086#1089':'
        end
        object Label3: TLabel
          Left = 8
          Top = 98
          Width = 98
          Height = 13
          Caption = #1055#1088#1072#1074#1080#1083#1100#1085#1099#1081' '#1086#1090#1074#1077#1090':'
        end
        object Label4: TLabel
          Left = 8
          Top = 138
          Width = 42
          Height = 13
          Caption = #1054#1090#1074#1077#1090' 1:'
        end
        object Label5: TLabel
          Left = 248
          Top = 138
          Width = 42
          Height = 13
          Caption = #1054#1090#1074#1077#1090' 2:'
        end
        object Label6: TLabel
          Left = 8
          Top = 178
          Width = 42
          Height = 13
          Caption = #1054#1090#1074#1077#1090' 3:'
          Enabled = False
        end
        object Label7: TLabel
          Left = 248
          Top = 178
          Width = 42
          Height = 13
          Caption = #1054#1090#1074#1077#1090' 4:'
          Enabled = False
        end
        object DBMemo1: TDBMemo
          Left = 8
          Top = 24
          Width = 481
          Height = 73
          DataField = 'QUESTION'
          DataSource = dmTest.dsAsk
          TabOrder = 0
        end
        object DBEdit1: TDBEdit
          Left = 8
          Top = 112
          Width = 481
          Height = 21
          DataField = 'ANSW_RT'
          DataSource = dmTest.dsAsk
          TabOrder = 1
        end
        object DBEdit2: TDBEdit
          Left = 8
          Top = 152
          Width = 233
          Height = 21
          DataField = 'ANSWER1'
          DataSource = dmTest.dsAsk
          TabOrder = 2
        end
        object DBEdit3: TDBEdit
          Left = 248
          Top = 152
          Width = 241
          Height = 21
          DataField = 'ANSWER2'
          DataSource = dmTest.dsAsk
          TabOrder = 3
        end
        object DBEdit4: TDBEdit
          Left = 8
          Top = 192
          Width = 233
          Height = 21
          DataField = 'ANSWER3'
          DataSource = dmTest.dsAsk
          Enabled = False
          ParentColor = True
          TabOrder = 4
        end
        object DBEdit5: TDBEdit
          Left = 248
          Top = 192
          Width = 241
          Height = 21
          DataField = 'ANSWER4'
          DataSource = dmTest.dsAsk
          Enabled = False
          ParentColor = True
          TabOrder = 5
        end
        object DBNavigator5: TDBNavigator
          Left = 8
          Top = 224
          Width = 477
          Height = 25
          DataSource = dmTest.dsAsk
          VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbEdit, nbPost, nbCancel]
          Hints.Strings = (
            #1053#1072#1095#1072#1083#1086
            #1053#1072#1079#1072#1076
            #1042#1087#1077#1088#1077#1076
            #1050#1086#1085#1077#1094
            #1042#1089#1090#1072#1074#1080#1090#1100
            #1059#1076#1072#1083#1080#1090#1100
            #1048#1089#1087#1088#1072#1074#1080#1090#1100
            #1055#1086#1076#1090#1074#1077#1088#1076#1080#1090#1100
            #1054#1090#1084#1077#1085#1080#1090#1100
            #1054#1073#1085#1086#1074#1080#1090#1100)
          TabOrder = 6
        end
      end
    end
  end
  object btnClose: TBitBtn
    Left = 432
    Top = 320
    Width = 97
    Height = 25
    Cancel = True
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 1
    OnClick = btnCloseClick
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
end
