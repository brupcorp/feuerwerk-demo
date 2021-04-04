//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <AppEvnts.hpp>
#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <Controls.hpp>
#include <ExtCtrls.hpp>
#include <Forms.hpp>
#include <StdCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm {
  __published:  // Von der IDE verwaltete Komponenten
    TTimer *Timer1;
    void __fastcall Timer1Timer(TObject *Sender);

   private:  // Anwender-Deklarationen
   public:   // Anwender-Deklarationen
    __fastcall TForm1(TComponent *Owner);
    void feuerwerk();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
