//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "result.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmResult *frmResult;
//---------------------------------------------------------------------------
__fastcall TfrmResult::TfrmResult(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmResult::InitResult(AnsiString strName, AnsiString strD, AnsiString strGroup, float per, int time, TDateTime datetime)
{
    sgR->Cells[0][0] = "Параметр";
    sgR->Cells[1][0] = "Значение";

    sgR->Cells[0][1] = "Имя";
    sgR->Cells[1][1] = strName;

    sgR->Cells[0][2] = "Предмет";
    sgR->Cells[1][2] = strD;

    sgR->Cells[0][3] = "Группа";
    sgR->Cells[1][3] = strGroup;

    sgR->Cells[0][4] = "Процент";
    sgR->Cells[1][4] = FloatToStrF( per, ffFixed, 3, 2 ) + "%";

    sgR->Cells[0][5] = "Время";
    sgR->Cells[1][5] = IntToStr( time ) + " сек";

    sgR->Cells[0][6] = "Дата";
    sgR->Cells[1][6] = datetime.DateString() + " ( " + datetime.TimeString() + " ) ";
}
