//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitRomanos.h"

#include <map>
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent *Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
   std::string romanNumeral = AnsiString(UpperCase(Edit1->Text)).c_str();

   int decimalNumber = ConvertRomanToDecimal(romanNumeral);

   Memo1->Lines->Add("Romano: " + UpperCase(Edit1->Text) + " Decimal: " + decimalNumber);
}

int TForm1::ConvertRomanToDecimal(const std::string &romanNumeral)
{
   std::map<char, int> romanToDecimal{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

   int result = 0;
   int prevValue = 0;

   for (int i = romanNumeral.length() - 1; i >= 0; i--)
   {
      int currentValue = romanToDecimal[romanNumeral[i]];

      if (currentValue >= prevValue)
      {
         result += currentValue;
      }
      else
      {
         result -= currentValue;
      }
      prevValue = currentValue;
   }
   return result;
}
//---------------------------------------------------------------------------

