//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Newfile1;
        TMenuItem *N1;
        TMenuItem *Openfile1;
        TMenuItem *Save1;
        TMenuItem *Saveas1;
        TMenuItem *N2;
        TMenuItem *Exit1;
        TMenuItem *Edit1;
        TMenuItem *CutCtrilX1;
        TMenuItem *CopyCtrilC1;
        TMenuItem *PasteCtrlV1;
        TMenuItem *Format1;
        TMenuItem *Wraplines1;
        TMenuItem *Font1;
        TMenuItem *Help1;
        TMenuItem *Info1;
        TMenuItem *GitHub1;
        TMemo *Memo;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        void __fastcall Openfile1Click(TObject *Sender);
        void __fastcall Saveas1Click(TObject *Sender);
        void __fastcall Save1Click(TObject *Sender);
        void __fastcall Newfile1Click(TObject *Sender);
        void __fastcall MemoKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall CutCtrilX1Click(TObject *Sender);
        void __fastcall CopyCtrilC1Click(TObject *Sender);
        void __fastcall PasteCtrlV1Click(TObject *Sender);
        void __fastcall Wraplines1Click(TObject *Sender);
        void __fastcall Font1Click(TObject *Sender);
        void __fastcall GitHub1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
