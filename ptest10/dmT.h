//---------------------------------------------------------------------------

#ifndef dmTH
#define dmTH
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
    TADOConnection *TestConnection;
    TADOTable *tblD;
    TDataSource *dsD;
    TADOTable *tblAsk;
    TDataSource *dsAsk;
    TAutoIncField *tblAskID;
    TMemoField *tblAskQUESTION;
    TStringField *tblAskANSW_RT;
    TStringField *tblAskANSWER1;
    TStringField *tblAskANSWER2;
    TStringField *tblAskANSWER3;
    TStringField *tblAskANSWER4;
    TADOTable *tblPermis;
    TDataSource *dsPermis;
    TAutoIncField *tblPermisID;
    TBooleanField *tblPermisPERMISSION;
    TIntegerField *tblPermisGROUP;
    TIntegerField *tblDID;
    TStringField *tblDNAME;
    TBooleanField *tblDENABLED;
    TDataSource *dsStudView;
    TADOQuery *qStudView;
    TADOTable *tblJ;
    TAutoIncField *tblJID;
    TStringField *tblJNAME;
    TStringField *tblJDISCIPLINE;
    TStringField *tblJGROUP;
    TIntegerField *tblJTIME;
    TDateTimeField *tblJDATETIME;
    TADOTable *tblO;
    TAutoIncField *tblOID;
    TStringField *tblONAME;
    TAutoIncField *qStudViewID;
    TAutoIncField *qStudViewGROUP;
    TStringField *qStudViewNAME;
    TStringField *qStudViewKURS;
    TMemoField *tblJLOG;
    TMemoField *tblJLOG2;
    TFloatField *tblJPERCENT;
    void __fastcall tblAskAfterScroll(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
        __fastcall TdmTest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdmTest *dmTest;
//---------------------------------------------------------------------------
#endif
