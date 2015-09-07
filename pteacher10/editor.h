//---------------------------------------------------------------------------

#ifndef editorH
#define editorH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TfrmEditor : public TForm
{
__published:	// IDE-managed Components
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TBevel *Bevel1;
    TLabel *Label1;
    TBitBtn *btnClose;
    TGroupBox *GroupBox1;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid2;
    TDBNavigator *DBNavigator2;
    TGroupBox *GroupBox3;
    TGroupBox *GroupBox4;
    TDBNavigator *DBNavigator3;
    TDBNavigator *DBNavigator4;
    TDBGrid *DBGrid3;
    TDBGrid *DBGrid4;
    TTabSheet *TabSheet3;
    TGroupBox *GroupBox5;
    TDBMemo *DBMemo1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TDBEdit *DBEdit4;
    TDBEdit *DBEdit5;
    TDBNavigator *DBNavigator5;
    void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmEditor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmEditor *frmEditor;
//---------------------------------------------------------------------------
#endif
