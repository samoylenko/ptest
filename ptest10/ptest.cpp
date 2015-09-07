//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("ptest.res");
USEFORM("Main.cpp", frmMain);
USEFORM("dmT.cpp", dmTest); /* TDataModule: File Type */
USEFORM("ask.cpp", frmAsk);
USEFORM("result.cpp", frmResult);
USEFORM("ident.cpp", frmIdent);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
             Application->Initialize();
             Application->Title = "Power Test";
         Application->CreateForm(__classid(TfrmMain), &frmMain);
         Application->CreateForm(__classid(TdmTest), &dmTest);
         Application->CreateForm(__classid(TfrmAsk), &frmAsk);
         Application->CreateForm(__classid(TfrmResult), &frmResult);
         Application->CreateForm(__classid(TfrmIdent), &frmIdent);
         Application->Run();

        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
