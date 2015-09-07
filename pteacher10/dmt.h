//---------------------------------------------------------------------------

#ifndef dmtH
#define dmtH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <Db.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TdmTest : public TDataModule
{
__published:	// IDE-managed Components
    TDataSource *dsJ;
    TDataSource *dsO;
    TDataSource *dsG;
    TDataSource *dsD;
    TDataSource *dsP;
    TDataSource *dsS;
    TADOQuery *qDelS;
    TADOConnection *TestConnection;
    TADOTable *tblO;
    TADOTable *tblG;
    TADOTable *tblD;
    TADOTable *tblP;
    TADOTable *tblS;
    TADOTable *tblJ;
    TAutoIncField *tblJID;
    TStringField *tblJNAME;
    TStringField *tblJDISCIPLINE;
    TStringField *tblJGROUP;
    TIntegerField *tblJTIME;
    TDateTimeField *tblJDATETIME;
    TAutoIncField *tblOID;
    TStringField *tblONAME;
    TAutoIncField *tblGID;
    TStringField *tblGNAME;
    TAutoIncField *tblDID;
    TStringField *tblDNAME;
    TBooleanField *tblDENABLED;
    TAutoIncField *tblPID;
    TBooleanField *tblPPERMISSION;
    TIntegerField *tblPGROUP;
    TAutoIncField *tblSID;
    TStringField *tblSNAME;
    TIntegerField *tblSGROUP;
    TADOTable *tblAsk;
    TDataSource *dsAsk;
    TAutoIncField *tblAskID;
    TMemoField *tblAskQUESTION;
    TStringField *tblAskANSW_RT;
    TStringField *tblAskANSWER1;
    TStringField *tblAskANSWER2;
    TStringField *tblAskANSWER3;
    TStringField *tblAskANSWER4;
    TIntegerField *tblAskDISCIPLINE;
    TMemoField *tblJLOG;
        TMemoField *tblJLOG2;
    TFloatField *tblJPERCENT;
    void __fastcall tblGAfterScroll(TDataSet *DataSet);
    void __fastcall tblSBeforePost(TDataSet *DataSet);
    void __fastcall tblGBeforeDelete(TDataSet *DataSet);
    void __fastcall tblDAfterInsert(TDataSet *DataSet);
    void __fastcall tblDAfterScroll(TDataSet *DataSet);
    void __fastcall tblAskBeforePost(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
    __fastcall TdmTest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdmTest *dmTest;
//---------------------------------------------------------------------------
#endif
