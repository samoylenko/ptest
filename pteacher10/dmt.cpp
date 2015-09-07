//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dmt.h"
#include "editor.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TdmTest *dmTest;
//---------------------------------------------------------------------------
__fastcall TdmTest::TdmTest(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TdmTest::tblGAfterScroll(TDataSet *DataSet)
{
    if( tblGNAME->AsString != "" )
    {
        tblS->Filter = "GROUP = " + tblGID->AsString;
    }
    else
    {
        tblS->Filter = "GROUP = 0";
    }
}
//---------------------------------------------------------------------------

void __fastcall TdmTest::tblSBeforePost(TDataSet *DataSet)
{
    tblSGROUP->AsInteger = tblGID->AsInteger;
}
//---------------------------------------------------------------------------

void __fastcall TdmTest::tblGBeforeDelete(TDataSet *DataSet)
{
    qDelS->Parameters->ParamByName( "GRP" )->Value = tblGID->AsInteger;
    qDelS->ExecSQL();
}
//---------------------------------------------------------------------------

void __fastcall TdmTest::tblDAfterInsert(TDataSet *DataSet)
{
    tblDENABLED->AsBoolean = true;
}
//---------------------------------------------------------------------------

void __fastcall TdmTest::tblDAfterScroll(TDataSet *DataSet)
{
    if( tblDNAME->AsString != "" )
    {
        tblAsk->Filter = "DISCIPLINE = " + tblDID->AsString;
    }
    else
    {
        tblAsk->Filter = "DISCIPLINE = 0";
    }
    tblAsk->Filtered = true;
}
//---------------------------------------------------------------------------

void __fastcall TdmTest::tblAskBeforePost(TDataSet *DataSet)
{
    tblAskDISCIPLINE->AsInteger = tblDID->AsInteger;    
}
//---------------------------------------------------------------------------

