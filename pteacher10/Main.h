//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <DBCtrls.hpp>
#include <ComCtrls.hpp>
#include <CheckLst.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TBevel *Bevel1;
    TBitBtn *btnClose;
    TLabel *Label1;
    TDBCheckBox *cbP;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TBevel *Bevel2;
        TGroupBox *GroupBox2;
        TGroupBox *GroupBox3;
    TDBLookupListBox *lbG;
        TCheckListBox *lbD;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
    TBitBtn *btnRefreshJ;
    TDBGrid *DBGrid2;
    TDBNavigator *DBNavigator2;
    TBitBtn *btnRefreshO;
    TBitBtn *btnEditor;
    TBitBtn *btnApply;
    TBitBtn *BitBtn1;
    void __fastcall FormShow(TObject *Sender);
        void __fastcall btnRefreshJClick(TObject *Sender);
    void __fastcall btnRefreshOClick(TObject *Sender);
    void __fastcall btnCloseClick(TObject *Sender);
    void __fastcall btnApplyClick(TObject *Sender);
    void __fastcall lbGClick(TObject *Sender);
    void __fastcall cbPClick(TObject *Sender);
    void __fastcall lbDClickCheck(TObject *Sender);
    void __fastcall btnEditorClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmMain(TComponent* Owner);
    bool __fastcall Logon(AnsiString strUser, AnsiString strPass);
    void __fastcall FillD();
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
