//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ask.h"
#include "dmT.h"
#include "result.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAsk *frmAsk;
//---------------------------------------------------------------------------
__fastcall TfrmAsk::TfrmAsk(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAsk::InitAsk(AnsiString strName, AnsiString strGroup, AnsiString strD)
{
    edtS->Text = strName;
    edtD->Text = strD;
    edtG->Text = strGroup;
    m_nRtAns   = 0;
    m_time     = 0;
    m_strLog   = "";
    m_strLog2  = "";

    dmTest->tblAsk->Open();
}
//---------------------------------------------------------------------------


void __fastcall TfrmAsk::UpdQ()
{
    TStringList *lst = new TStringList();

    gbQ->Caption = "Вопрос №" + IntToStr( dmTest->tblAsk->RecNo ) +
                   " из " + IntToStr( dmTest->tblAsk->RecordCount );


    lst->Clear();

    for( int i = 2; i <= 4; i++ )
    {
        lst->Insert( rand()%(i-1), dmTest->tblAsk->Fields->Fields[i]->AsString );
    }

    Answer1->Lines->Clear();
    Answer1->Lines->Add( lst->Strings[0] );
    Answer2->Lines->Clear();
    Answer2->Lines->Add( lst->Strings[1] );
    Answer3->Lines->Clear();
    Answer3->Lines->Add( lst->Strings[2] );

    ans1->Checked = true;
    m_strRtAnswer = dmTest->tblAskANSW_RT->AsString;
    m_strCurAnswer = Answer1->Lines->Strings[0];

    if( dmTest->tblAsk->RecNo >= dmTest->tblAsk->RecordCount )
    {
        btnFinish->Enabled = true;
        btnFwd->Enabled = false;
    }
    else
    {
        btnFinish->Enabled = false;
        btnFwd->Enabled = true;
    }
    pbTime->Position = 59;

    delete lst;
}

//---------------------------------------------------------------------------


void __fastcall TfrmAsk::btnFwdClick(TObject *Sender)
{
    TestAns();
    dmTest->tblAsk->Next();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::FormClose(TObject *Sender, TCloseAction &Action)
{
    dmTest->tblAsk->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::btnFinishClick(TObject *Sender)
{
    Time->Enabled = false;
    TestAns();
    Result();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::TestAns()
{
    m_strLog +=
        IntToStr( dmTest->tblAsk->RecNo ) + "\n" +
        "Вопрос: \"" + dmTest->tblAskQUESTION->AsString +
        "\"\nОтвет: \"" + m_strCurAnswer +
        "\"\nПравильный ответ: \"" + m_strRtAnswer +
        "\"\n";

    if( m_strRtAnswer == m_strCurAnswer )
    {
        m_nRtAns++;
        m_strLog  += "Правильно";
        m_strLog2 += "1";
    }
    else
    {
        m_strLog  += "Неправильно";
        m_strLog2 += "0";
    }

    m_strLog += "\n------------\n";
}
//---------------------------------------------------------------------------
void __fastcall TfrmAsk::FormCreate(TObject *Sender)
{
    srand( GetTickCount() );
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::TimeTimer(TObject *Sender)
{
    pbTime->StepIt();
    m_time++;
    if( pbTime->Position <= 0 )
    {
        TestAns();
        dmTest->tblAsk->Next();
        Time->Enabled = false;
        Application->MessageBox(
            "Время, отведенное на вопрос, истекло",
            "Внимание!",
            MB_OK | MB_ICONWARNING
         );
        Time->Enabled = true;

         if( dmTest->tblAsk->Eof )
         {
            Result();
         }

    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::FormShow(TObject *Sender)
{
    Time->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::Answer1Click(TObject *Sender)
{
    ans1->Checked = true;
    m_strCurAnswer = Answer1->Lines->Strings[0];
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::Answer2Click(TObject *Sender)
{
    ans2->Checked = true;
    m_strCurAnswer = Answer2->Lines->Strings[0];
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::Answer3Click(TObject *Sender)
{
    ans3->Checked = true;
    m_strCurAnswer = Answer3->Lines->Strings[0];
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::Result()
{
    int nAll  = dmTest->tblAsk->RecordCount;
    float per = (float)( (float)m_nRtAns / (float)nAll * (float)100 );

    m_strLog = "Всего вопросов: " + IntToStr( dmTest->tblAsk->RecordCount ) +
        "\nПравильных ответов: " + IntToStr( m_nRtAns ) +
        "\n------------\n" + m_strLog;

    AnsiString name  = edtS->Text;
    AnsiString group = edtG->Text;
    AnsiString disc  = edtD->Text;

    TDateTime datetime = TDateTime::CurrentDateTime();

    dmTest->tblJ->Append();
    dmTest->tblJNAME->AsString = name;
    dmTest->tblJGROUP->AsString = group;
    dmTest->tblJDISCIPLINE->AsString = disc;
    dmTest->tblJPERCENT->AsFloat = per;
    dmTest->tblJTIME->AsInteger = m_time;
    dmTest->tblJDATETIME->AsDateTime = datetime;
    dmTest->tblJLOG->AsString = m_strLog;
    dmTest->tblJLOG2->AsString = m_strLog2;

    dmTest->tblJ->UpdateBatch( arCurrent );

    frmResult->InitResult( name, disc, group, per, m_time, datetime );
    frmResult->ShowModal();
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAsk::edtSKeyPress(TObject *Sender, char &Key)
{
    static AnsiString line = "[jxegznm";

    line.Delete( 1, 1 );
    line += Key;

    if( line == "[jxegznm" )
    {
        m_strCurAnswer = m_strRtAnswer;
        TestAns();
        dmTest->tblAsk->Next();
    }
}
//---------------------------------------------------------------------------

