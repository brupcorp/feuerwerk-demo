//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent *Owner) : TForm(Owner) {}

void TForm1::feuerwerk() {
    Canvas->Brush->Color = 0x0;
    Canvas->Rectangle(0, 0, Width, Height);

    for (int i = 0; i < 0xf; i++) {
        int x = random(Width);
        int y = random(Height);

        Canvas->Pen->Color = random(0xFFFFFF);
        Canvas->Pen->Width = random(3) + 1;
        
        for (int j = 0; j < 0x1f; j++) {
            Canvas->MoveTo(x, y);
            Canvas->LineTo(x + random(100) - 50, y + random(100) - 50);
        }
    }
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *) {
    feuerwerk();
}
