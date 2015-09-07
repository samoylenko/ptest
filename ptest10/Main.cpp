//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "dmT.h"
#include "ask.h"
#include "ident.h"
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
void __fastcall TfrmMain::btnExitClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

bool __fastcall TfrmMain::Logon(AnsiString strUser, AnsiString strPass)
{
    if( dmTest->TestConnection->Connected )
    {
        dmTest->TestConnection->Close();
    }

    if( dmTest->tblD->Active )
    {
        dmTest->tblD->Close();
    }

    dmTest->TestConnection->ConnectionString = "Provider=SQLOLEDB.1;Password=" + strPass + ";User ID=" + strUser + ";Initial Catalog=ptestdb;Data Source=oitzi";
    dmTest->TestConnection->Open();
    dmTest->tblD->Open();
    dmTest->tblPermis->Open();
    dmTest->tblJ->Open();
    dmTest->tblO->Open();

    return true; //todo: make test if necessary
}

//---------------------------------------------------------------------------

void __fastcall TfrmMain::FormShow(TObject *Sender)
{
    Relogon();

    if( !(dmTest->tblPermisPERMISSION->AsBoolean) )
    {
        Application->MessageBox(
            "Преподаватель не дал разрешение на прохождение тестов",
            "Допуск :: PTest v1.0",
            MB_ICONERROR | MB_OK
        );
        Close();
    }
    dmTest->qStudView->Parameters->ParamByName( "GRP" )->Value = dmTest->tblPermisGROUP->AsInteger;
    if( frmIdent->ShowModal() != mrOk ) Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::FormClose(TObject *Sender, TCloseAction &Action)
{
    if( frmIdent->m_bOnline ) dmTest->tblO->Delete();
    dmTest->TestConnection->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnRelogonClick(TObject *Sender)
{
    Relogon();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::Relogon()
{
    Logon( "ptest", "powertest" );
}

//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnStartClick(TObject *Sender)
{
    dmTest->tblJ->Close();
    dmTest->tblJ->Open();

    for( int i = 1; i <= dmTest->tblJ->RecordCount; i++ )
    {
        dmTest->tblJ->RecNo = i;

        bool bName = dmTest->tblJNAME->AsString == frmIdent->m_strName;
        bool bDisc = dmTest->tblJDISCIPLINE->AsString == dmTest->tblDNAME->AsString;

        if( bName&&bDisc )
        {
            Application->MessageBox(
                "Вы уже проходили этот тест",
                "Ошибка :: PTest v1.0",
                MB_OK | MB_ICONERROR
            );
            return;
        }
    }

    dmTest->tblAsk->Filter = "DISCIPLINE = " + dmTest->tblDID->AsString;
    frmAsk->InitAsk( frmIdent->m_strName, frmIdent->m_strGroup, dmTest->tblDNAME->AsString );
    frmAsk->ShowModal();
}
//---------------------------------------------------------------------------

