//---------------------------------------------------------------------------

#ifndef UnitRomanosH
#define UnitRomanosH
#include <System.Classes.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
 __published: // IDE-managed Components
   TPanel *Panel1;
   TEdit *Edit1;
   TSpeedButton *SpeedButton1;
   TMemo *Memo1;
   void __fastcall SpeedButton1Click(TObject *Sender);

 private: // User declarations
   int ConvertRomanToDecimal(const std::string &romanNumeral);

 public: // User declarations
   __fastcall TForm1(TComponent *Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

