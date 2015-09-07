object dmTest: TdmTest
  OldCreateOrder = False
  Left = 209
  Top = 76
  Height = 479
  Width = 400
  object TestConnection: TADOConnection
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=powertest;Persist Security Info=Tru' +
      'e;User ID=ptest;Initial Catalog=ptestdb;Data Source=oitzi;Use Pr' +
      'ocedure for Prepare=1;Auto Translate=True;Packet Size=4096;Works' +
      'tation ID=STUDENT173;Use Encryption for Data=False;Tag with colu' +
      'mn collation when possible=False'
    DefaultDatabase = 'ptestdb'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 32
    Top = 16
  end
  object tblD: TADOTable
    Connection = TestConnection
    CursorType = ctStatic
    Filter = 'ENABLED = 1'
    Filtered = True
    LockType = ltReadOnly
    TableName = 'DISCIPLINES'
    Left = 32
    Top = 72
    object tblDID: TIntegerField
      FieldName = 'ID'
      ReadOnly = True
      Visible = False
    end
    object tblDNAME: TStringField
      DisplayLabel = #1053#1072#1079#1074#1072#1085#1080#1077
      FieldName = 'NAME'
      Size = 256
    end
    object tblDENABLED: TBooleanField
      FieldName = 'ENABLED'
      Visible = False
    end
  end
  object dsD: TDataSource
    DataSet = tblD
    Left = 80
    Top = 72
  end
  object tblAsk: TADOTable
    Connection = TestConnection
    CursorType = ctStatic
    Filtered = True
    AfterScroll = tblAskAfterScroll
    TableName = 'ASK'
    Left = 32
    Top = 128
    object tblAskID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object tblAskQUESTION: TMemoField
      FieldName = 'QUESTION'
      BlobType = ftMemo
    end
    object tblAskANSW_RT: TStringField
      FieldName = 'ANSW_RT'
      Size = 256
    end
    object tblAskANSWER1: TStringField
      FieldName = 'ANSWER1'
      Size = 256
    end
    object tblAskANSWER2: TStringField
      FieldName = 'ANSWER2'
      Size = 256
    end
    object tblAskANSWER3: TStringField
      FieldName = 'ANSWER3'
      Size = 256
    end
    object tblAskANSWER4: TStringField
      FieldName = 'ANSWER4'
      Size = 256
    end
  end
  object dsAsk: TDataSource
    DataSet = tblAsk
    Left = 80
    Top = 128
  end
  object tblPermis: TADOTable
    Connection = TestConnection
    TableName = 'PERMISSON'
    Left = 32
    Top = 240
    object tblPermisID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object tblPermisPERMISSION: TBooleanField
      FieldName = 'PERMISSION'
    end
    object tblPermisGROUP: TIntegerField
      FieldName = 'GROUP'
    end
  end
  object dsPermis: TDataSource
    DataSet = tblPermis
    Left = 80
    Top = 240
  end
  object dsStudView: TDataSource
    DataSet = qStudView
    Left = 80
    Top = 184
  end
  object qStudView: TADOQuery
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
      'select * from'
      'ALLSTUDENTS'
      'where [GROUP] = :GRP')
    Left = 32
    Top = 184
    object qStudViewID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object qStudViewGROUP: TAutoIncField
      FieldName = 'GROUP'
      ReadOnly = True
    end
    object qStudViewNAME: TStringField
      FieldName = 'NAME'
      Size = 256
    end
    object qStudViewKURS: TStringField
      FieldName = 'KURS'
      Size = 256
    end
  end
  object tblJ: TADOTable
    Connection = TestConnection
    TableName = 'JOURNAL'
    Left = 32
    Top = 296
    object tblJID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object tblJNAME: TStringField
      FieldName = 'NAME'
      Size = 256
    end
    object tblJDISCIPLINE: TStringField
      FieldName = 'DISCIPLINE'
      Size = 256
    end
    object tblJGROUP: TStringField
      FieldName = 'GROUP'
      Size = 256
    end
    object tblJPERCENT: TFloatField
      FieldName = 'PERCENT'
    end
    object tblJTIME: TIntegerField
      FieldName = 'TIME'
    end
    object tblJDATETIME: TDateTimeField
      FieldName = 'DATETIME'
    end
    object tblJLOG: TMemoField
      FieldName = 'LOG'
      BlobType = ftMemo
    end
    object tblJLOG2: TMemoField
      FieldName = 'LOG2'
      BlobType = ftMemo
    end
  end
  object tblO: TADOTable
    Connection = TestConnection
    TableName = 'ONLINE'
    Left = 32
    Top = 352
    object tblOID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object tblONAME: TStringField
      FieldName = 'NAME'
      Size = 256
    end
  end
end
