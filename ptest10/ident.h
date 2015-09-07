//---------------------------------------------------------------------------

#ifndef identH
#define identH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmIdent : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TBitBtn *btnOk;
    TBitBtn *btnCancel;
    TEdit *edtPass;
    TDBEdit *edtGrp;
    TDBLookupComboBox *cbStudents;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall btnOkClick(TObject *Sender);
private:	// User declarations
public:
    AnsiString m_strName;
    AnsiString m_strGroup;
    bool m_bOnline;		// User declarations
    __fastcall TfrmIdent(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmIdent *frmIdent;
//---------------------------------------------------------------------------
#endif
