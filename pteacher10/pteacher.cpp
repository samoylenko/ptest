//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USEFORM("Main.cpp", frmMain);
USEFORM("dmt.cpp", dmTest); /* TDataModule: File Type */
USEFORM("pass.cpp", frmLogin);
USEFORM("editor.cpp", frmEditor);
USEFORM("details.cpp", frmDetails);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->Title = "Power Teacher";
         Application->CreateForm(__classid(TfrmMain), &frmMain);
                 Application->CreateForm(__classid(TdmTest), &dmTest);
                 Application->CreateForm(__classid(TfrmLogin), &frmLogin);
                 Application->CreateForm(__classid(TfrmEditor), &frmEditor);
                 Application->CreateForm(__classid(TfrmDetails), &frmDetails);
                 Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
