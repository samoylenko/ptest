//---------------------------------------------------------------------------

#ifndef resultH
#define resultH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmResult : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TStringGrid *sgR;
    TBitBtn *btnClose;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmResult(TComponent* Owner);
    void __fastcall InitResult(AnsiString strName, AnsiString strD, AnsiString strGroup, float per, int time, TDateTime datetime);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmResult *frmResult;
//---------------------------------------------------------------------------
#endif
