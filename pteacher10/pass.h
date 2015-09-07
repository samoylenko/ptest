//---------------------------------------------------------------------------

#ifndef passH
#define passH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmLogin : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TBitBtn *btnOk;
    TLabel *Label1;
    TEdit *edtU;
    TLabel *Label2;
    TEdit *edtP;
    TBitBtn *btnCancel;
    void __fastcall btnOkClick(TObject *Sender);
    void __fastcall btnCancelClick(TObject *Sender);
private:	// User declarations
public:
    AnsiString m_strPass;
    AnsiString m_strUser;		// User declarations
    __fastcall TfrmLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmLogin *frmLogin;
//---------------------------------------------------------------------------
#endif
