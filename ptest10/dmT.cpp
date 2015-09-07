//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dmT.h"
#include "ask.h"
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
void __fastcall TdmTest::tblAskAfterScroll(TDataSet *DataSet)
{
    frmAsk->UpdQ();    
}
//---------------------------------------------------------------------------

