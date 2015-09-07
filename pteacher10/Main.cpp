//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "dmt.h"
#include "pass.h"
#include "editor.h"
#include "details.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

bool __fastcall TfrmMain::Logon(AnsiString strUser, AnsiString strPass)
{
    if( dmTest->TestConnection->Connected )
    {
        dmTest->TestConnection->Close();
    }

    dmTest->TestConnection->ConnectionString = "Provider=SQLOLEDB.1;Password=" + strPass + ";User ID=" + strUser + ";Initial Catalog=ptestdb;Data Source=oitzi";

    try
    {
        dmTest->TestConnection->Open();
    }
    catch(...)
    {
        Application->MessageBox(
            "Ошибка соединения. Проверьте правильность вводимых значений",
            "Ошибка",
            MB_OK | MB_ICONERROR
        );
        return false;
    }

    dmTest->tblD->Open();
    dmTest->tblP->Open();
    dmTest->tblJ->Open();
    dmTest->tblO->Open();
    dmTest->tblG->Open();
    dmTest->tblS->Open();
    dmTest->tblAsk->Open();

    return true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::FormShow(TObject *Sender)
{
#ifndef _DEBUG
    bool bIn;

    do
    {
        if( frmLogin->ShowModal() != mrOk )
        {
            Close();
            return;
        }
        bIn = Logon( frmLogin->m_strUser, frmLogin->m_strPass );
    }
    while( !bIn );
#else

    Logon( "pteacher", "powerteacher" );
#endif

    FillD();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnRefreshJClick(TObject *Sender)
{
    dmTest->tblJ->Close();
    dmTest->tblJ->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnRefreshOClick(TObject *Sender)
{
    dmTest->tblO->Close();
    dmTest->tblO->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnCloseClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnApplyClick(TObject *Sender)
{
    dmTest->tblP->UpdateBatch( arAll );
    dmTest->tblJ->UpdateBatch( arAll );
    dmTest->tblO->UpdateBatch( arAll );
    dmTest->tblD->UpdateBatch( arAll );

    btnApply->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::lbGClick(TObject *Sender)
{
    btnApply->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::cbPClick(TObject *Sender)
{
    btnApply->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::FillD()
{
    lbD->Items->Clear();

    for( int i = 1; i <= dmTest->tblD->RecordCount; i++ )
    {
        dmTest->tblD->RecNo = i;
        lbD->Items->Add( dmTest->tblDNAME->AsString );
    }

    for( int i = 1; i <= dmTest->tblD->RecordCount; i++ )
    {
        dmTest->tblD->RecNo = i;
        lbD->Checked[i-1] = dmTest->tblDENABLED->AsBoolean;
    }

}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::lbDClickCheck(TObject *Sender)
{
    TLocateOptions Opts;
    Opts.Clear();

    AnsiString strName = lbD->Items->Strings[ lbD->ItemIndex ];
    if( !dmTest->tblD->Locate( "NAME", strName, Opts ) )
    {
        Application->MessageBox(
            "TfrmMain::lbDClickCheck",
            "Ошибка отладки. Ничего страшного",
            MB_ICONERROR | MB_OK
        );
    }
    dmTest->tblD->Edit();
    dmTest->tblDENABLED->AsBoolean = lbD->Checked[ lbD->ItemIndex ];

    btnApply->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnEditorClick(TObject *Sender)
{
    frmEditor->ShowModal();
    FillD();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::FormClose(TObject *Sender, TCloseAction &Action)
{
    dmTest->TestConnection->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::BitBtn1Click(TObject *Sender)
{
    frmDetails->ShowModal();    
}
//---------------------------------------------------------------------------

