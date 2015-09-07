//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "editor.h"
#include "dmt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEditor *frmEditor;
//---------------------------------------------------------------------------
__fastcall TfrmEditor::TfrmEditor(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditor::btnCloseClick(TObject *Sender)
{
    Close();    
}
//---------------------------------------------------------------------------



