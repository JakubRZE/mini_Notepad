//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString filename="";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Openfile1Click(TObject *Sender)
{
        if (OpenDialog1->Execute())
          {
                try
                {
                        Memo->Lines->LoadFromFile(OpenDialog1->FileName);
                        filename = OpenDialog1->FileName;
                }
                catch (...)
                {
                        ShowMessage("Unable to open file!");
                }

         }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Saveas1Click(TObject *Sender)
{
 if (SaveDialog1->Execute())
          {
                try
                {
                        Memo->Lines->SaveToFile(SaveDialog1->FileName);
                        filename = SaveDialog1->FileName;
                }
                catch (...)
                {
                        ShowMessage("Unable to save file!");
                }

         }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)
{
 if (filename != "")
        {
               Memo->Lines->SaveToFile(filename);
        }
        else
        {
                 Form1->Saveas1Click(MainMenu1);
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Newfile1Click(TObject *Sender)
{

   if (Application->MessageBox("Any unsaved changes will be lost. Press Yes to continue." , "Confirm",
        MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES )
        {
                Memo->Lines->Clear();
                filename="";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::MemoKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (Shift.Contains(ssCtrl))
        {
                if ((Key =='s') || (Key == 'S'))
                {
                        Form1->Saveas1Click(MainMenu1);
                }

                if ((Key == 'n') ||(Key == 'N'))
                {
                        Form1->Newfile1Click(MainMenu1);
                }

                 if ((Key == 'o') ||(Key == 'O'))
                {
                        Form1->Openfile1Click(MainMenu1);
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
   if (Application->MessageBox("Are you sure you want to exit?" , "Confirm",
        MB_YESNO | MB_ICONQUESTION) == IDYES )
        {
                Application->Terminate();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
   if (Application->MessageBox("Are you sure you want to exit?" , "Confirm",
        MB_YESNO | MB_ICONQUESTION) == IDNO )
        {
                Action=caNone;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CutCtrilX1Click(TObject *Sender)
{
        Memo->CutToClipboard();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CopyCtrilC1Click(TObject *Sender)
{
     Memo->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PasteCtrlV1Click(TObject *Sender)
{
       Memo->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Wraplines1Click(TObject *Sender)
{
   if( Wraplines1 -> Checked == true )
      {
              Wraplines1 -> Checked = false;
              Memo -> WordWrap = false;
              Memo -> ScrollBars = ssBoth;
      }
   else
      {
              Wraplines1 -> Checked = true;
              Memo -> WordWrap = true;
              Memo -> ScrollBars = ssVertical;
      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Font1Click(TObject *Sender)
{
    if (FontDialog1->Execute())
        {
          //style1
          Memo->Font->Name = FontDialog1->Font->Name;

          //color
          Memo->Font->Color = FontDialog1->Font->Color;

          //size
          Memo->Font->Size = FontDialog1->Font->Size;

          //style
          Memo->Font->Style = FontDialog1->Font->Style;
        }    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::GitHub1Click(TObject *Sender)
{
    ShellExecute(NULL, "open","https://github.com/JakubRZE",NULL,NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
