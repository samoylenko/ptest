//---------------------------------------------------------------------------

#ifndef detailsH
#define detailsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmDetails : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TDBMemo *DBMemo1;
        TBevel *Bevel1;
        TBitBtn *btnClose;
        TLabel *Label1;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmDetails(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDetails *frmDetails;
//---------------------------------------------------------------------------
#endif
