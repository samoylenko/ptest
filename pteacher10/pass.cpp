//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "pass.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmLogin *frmLogin;
//---------------------------------------------------------------------------
__fastcall TfrmLogin::TfrmLogin(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmLogin::btnOkClick(TObject *Sender)
{
    m_strPass = edtP->Text;
    m_strUser = edtU->Text;

    edtP->Text = "";

    ModalResult = mrOk;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmLogin::btnCancelClick(TObject *Sender)
{
    edtP->Text = "";
    ModalResult = mrCancel;
}
//---------------------------------------------------------------------------

