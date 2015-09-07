//---------------------------------------------------------------------------

#ifndef askH
#define askH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DBCtrls.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmAsk : public TForm
{
__published:    // IDE-managed Components
    TEdit *edtS;
    TEdit *edtD;
    TGroupBox *gbQ;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TLabel *Label2;
    TDBMemo *DBMemo1;
    TPanel *Panel1;
    TBitBtn *btnFwd;
    TBitBtn *btnFinish;
    TBevel *Bevel1;
    TTimer *Time;
    TProgressBar *pbTime;
    TLabel *Label3;
    TEdit *edtG;
        TGroupBox *GroupBox1;
        TRadioButton *ans1;
        TRadioButton *ans2;
        TRadioButton *ans3;
        TMemo *Answer1;
        TMemo *Answer2;
        TMemo *Answer3;
    TLabel *Label4;
    void __fastcall btnFwdClick(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall btnFinishClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall TimeTimer(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall Answer1Click(TObject *Sender);
    void __fastcall Answer2Click(TObject *Sender);
    void __fastcall Answer3Click(TObject *Sender);
    void __fastcall edtSKeyPress(TObject *Sender, char &Key);
private:    // User declarations
public:
    int m_nRtAns;
    int m_time;
    AnsiString m_strRtAnswer;     // User declarations
    AnsiString m_strCurAnswer;
    AnsiString m_strLog;
    AnsiString m_strLog2;
    __fastcall TfrmAsk(TComponent* Owner);
    void __fastcall InitAsk(AnsiString strName, AnsiString strGroup, AnsiString strD);
    void __fastcall UpdQ();
    void __fastcall TestAns();
    void __fastcall Result();
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAsk *frmAsk;
//---------------------------------------------------------------------------
#endif
