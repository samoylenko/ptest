//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "details.h"
#include "dmt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmDetails *frmDetails;
//---------------------------------------------------------------------------
__fastcall TfrmDetails::TfrmDetails(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmDetails::btnCloseClick(TObject *Sender)
{
    Close();        
}
//---------------------------------------------------------------------------

