//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ident.h"
#include "dmT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmIdent *frmIdent;
//---------------------------------------------------------------------------
__fastcall TfrmIdent::TfrmIdent(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmIdent::FormShow(TObject *Sender)
{
    dmTest->qStudView->Open();
    m_bOnline = false;
//    cbStudents->Text = dmTest->qStudViewNAME->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TfrmIdent::FormClose(TObject *Sender, TCloseAction &Action)
{
    dmTest->qStudView->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIdent::btnOkClick(TObject *Sender)
{
    if( cbStudents->Text == "" )
    {
        Application->MessageBox(
            "Выберите имя",
            "Ошибка",
            MB_OK | MB_ICONERROR
          );
          return;
    }

    dmTest->tblO->Close();
    dmTest->tblO->Open();
    for( int i = 1; i <= dmTest->tblO->RecordCount; i++ )
    {
        dmTest->tblO->RecNo = i;
        if( cbStudents->Text == dmTest->tblONAME->AsString )
        {
            Application->MessageBox(
                "Студент с таким именем уже проходит тестирование",
                "Ошибка",
                MB_OK | MB_ICONERROR
            );
            return;
        }
    }

    dmTest->tblO->Append();
    dmTest->tblONAME->AsString = cbStudents->Text;
    dmTest->tblO->UpdateBatch( arCurrent );
    m_bOnline = true;

    m_strName   = cbStudents->Text;
    m_strGroup  = edtGrp->Text;
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------

