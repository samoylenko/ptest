object dmTest: TdmTest
  OldCreateOrder = False
  Left = 210
  Top = 124
  Height = 429
  Width = 583
  object dsJ: TDataSource
    DataSet = tblJ
    Left = 96
    Top = 104
  end
  object dsO: TDataSource
    DataSet = tblO
    Left = 96
    Top = 152
  end
  object dsG: TDataSource
    DataSet = tblG
    Left = 96
    Top = 200
  end
  object dsD: TDataSource
    DataSet = tblD
    Left = 96
    Top = 248
  end
  object dsP: TDataSource
    DataSet = tblP
    Left = 96
    Top = 296
  end
  object dsS: TDataSource
    DataSet = tblS
    Left = 248
    Top = 104
  end
  object qDelS: TADOQuery
    Connection = TestConnection
    Parameters = <
      item
        Name = 'GRP'
        Attributes = [paSigned]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = 1
      end>
    SQL.Strings = (
      'delete from STUDENTS'
      'where [GROUP] = :GRP')
    Left = 96
    Top = 16
  end
  object TestConnection: TADOConnection
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=ptestdb;Data Source=oitzi'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 32
    Top = 16
  end
  object tblO: TADOTable
    Connection = TestConnection
    IndexFieldNames = 'NAME'
    TableName = 'ONLINE'
    Left = 32
    Top = 152
    object tblOID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblONAME: TStringField
      DisplayLabel = #1048#1084#1103
      FieldName = 'NAME'
      Size = 256
    end
  end
  object tblG: TADOTable
    Connection = TestConnection
    AfterPost = tblGAfterScroll
    BeforeDelete = tblGBeforeDelete
    AfterScroll = tblGAfterScroll
    IndexFieldNames = 'NAME'
    TableName = 'GROUPS'
    Left = 32
    Top = 200
    object tblGID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblGNAME: TStringField
      DisplayLabel = #1053#1072#1079#1074#1072#1085#1080#1077
      FieldName = 'NAME'
      Size = 256
    end
  end
  object tblD: TADOTable
    Connection = TestConnection
    AfterInsert = tblDAfterInsert
    AfterScroll = tblDAfterScroll
    IndexFieldNames = 'NAME'
    TableName = 'DISCIPLINES'
    Left = 32
    Top = 248
    object tblDID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblDNAME: TStringField
      DisplayLabel = #1053#1072#1079#1074#1072#1085#1080#1077
      DisplayWidth = 25
      FieldName = 'NAME'
      Size = 256
    end
    object tblDENABLED: TBooleanField
      FieldName = 'ENABLED'
      Visible = False
    end
  end
  object tblP: TADOTable
    Connection = TestConnection
    TableName = 'PERMISSON'
    Left = 32
    Top = 296
    object tblPID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object tblPPERMISSION: TBooleanField
      FieldName = 'PERMISSION'
    end
    object tblPGROUP: TIntegerField
      FieldName = 'GROUP'
    end
  end
  object tblS: TADOTable
    Connection = TestConnection
    Filtered = True
    BeforePost = tblSBeforePost
    IndexFieldNames = 'NAME'
    TableName = 'STUDENTS'
    Left = 208
    Top = 104
    object tblSID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblSNAME: TStringField
      DisplayLabel = #1048#1084#1103
      FieldName = 'NAME'
      Size = 256
    end
    object tblSGROUP: TIntegerField
      FieldName = 'GROUP'
      Visible = False
    end
  end
  object tblJ: TADOTable
    Connection = TestConnection
    IndexFieldNames = 'NAME'
    TableName = 'JOURNAL'
    Left = 32
    Top = 104
    object tblJID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblJNAME: TStringField
      DisplayLabel = #1048#1084#1103
      DisplayWidth = 25
      FieldName = 'NAME'
      Size = 256
    end
    object tblJPERCENT: TFloatField
      DisplayLabel = #1055#1088#1086#1094#1077#1085#1090
      DisplayWidth = 5
      FieldName = 'PERCENT'
      DisplayFormat = '#.##'
    end
    object tblJDISCIPLINE: TStringField
      DisplayLabel = #1055#1088#1077#1076#1084#1077#1090
      DisplayWidth = 25
      FieldName = 'DISCIPLINE'
      Size = 256
    end
    object tblJGROUP: TStringField
      DisplayLabel = #1043#1088#1091#1087#1087#1072
      DisplayWidth = 10
      FieldName = 'GROUP'
      Size = 256
    end
    object tblJTIME: TIntegerField
      DisplayLabel = #1042#1088#1077#1084#1103
      DisplayWidth = 3
      FieldName = 'TIME'
    end
    object tblJDATETIME: TDateTimeField
      DisplayLabel = #1044#1072#1090#1072
      FieldName = 'DATETIME'
    end
    object tblJLOG: TMemoField
      FieldName = 'LOG'
      Visible = False
      BlobType = ftMemo
    end
    object tblJLOG2: TMemoField
      FieldName = 'LOG2'
      Visible = False
      BlobType = ftMemo
    end
  end
  object tblAsk: TADOTable
    Connection = TestConnection
    Filtered = True
    BeforePost = tblAskBeforePost
    TableName = 'ASK'
    Left = 208
    Top = 152
    object tblAskID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblAskQUESTION: TMemoField
      DisplayLabel = #1042#1086#1087#1088#1086#1089
      FieldName = 'QUESTION'
      BlobType = ftMemo
    end
    object tblAskANSW_RT: TStringField
      DisplayLabel = #1055#1088#1072#1074#1080#1083#1100#1085#1099#1081' '#1086#1090#1074#1077#1090
      DisplayWidth = 15
      FieldName = 'ANSW_RT'
      Size = 256
    end
    object tblAskANSWER1: TStringField
      DisplayLabel = #1054#1090#1074#1077#1090' 1'
      DisplayWidth = 15
      FieldName = 'ANSWER1'
      Size = 256
    end
    object tblAskANSWER2: TStringField
      DisplayLabel = #1054#1090#1074#1077#1090' 2'
      DisplayWidth = 15
      FieldName = 'ANSWER2'
      Size = 256
    end
    object tblAskANSWER3: TStringField
      DisplayLabel = #1054#1090#1074#1077#1090' 3'
      DisplayWidth = 15
      FieldName = 'ANSWER3'
      Size = 256
    end
    object tblAskANSWER4: TStringField
      DisplayLabel = #1054#1090#1074#1077#1090' 4'
      DisplayWidth = 15
      FieldName = 'ANSWER4'
      Size = 256
    end
    object tblAskDISCIPLINE: TIntegerField
      FieldName = 'DISCIPLINE'
      Visible = False
    end
  end
  object dsAsk: TDataSource
    DataSet = tblAsk
    Left = 248
    Top = 152
  end
end
