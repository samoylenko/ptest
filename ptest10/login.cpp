//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
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
    m_strPass = edtPass->Text;
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TfrmLogin::FormClose(TObject *Sender, TCloseAction &Action)
{
    edtPass->Text = "";
    m_strUser = edtUser->Text;    
}
//---------------------------------------------------------------------------


