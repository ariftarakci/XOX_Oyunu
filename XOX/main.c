#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "oyunAlani.h"
#include "Kontrol.h"
#include "kazanan.h"

int a=34,b=8;
int satir=0;
int sutun=0;
int ch;
int c=5;
int d=11;
int dizi[3][3]={{1,1,1},{1,1,1},{1,1,1}};
int toplam =3;
char oyuncu = 'X';
int sayac = 0;
void gezinme()
{
    gotoxy(37,2);
    printf("Sira %c oyuncusunda",oyuncu);
    while(1)
    {
        gotoxy(a,b);
        ch = _getch();
            switch (ch) {
                case 72: // Yukarı ok
                    b=b-c;
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    satir=satir-1;
                    break;
                case 80: // Aşağı ok
                    b=b+c;
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    satir=satir+1;
                    break;
                case 75: // Sol ok
                    a=a-d;
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    sutun=sutun-1;
                    break;
                case 77: // Sag ok
                    a=a+d;
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    sutun=sutun+1;
                    break;
                case 120: // X
                    if(dizi[satir][sutun]!=0 && dizi[satir][sutun]!=2 && oyuncu=='X')
                    {
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    printf("X");
                    girdi_var_x(a,b,dizi);
                    sira_degis(&oyuncu);
                    sayac++;
                    }
                    break;
                case 88: // x
                    if(dizi[satir][sutun]!=0 && dizi[satir][sutun]!=2&& oyuncu=='X')
                    {
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    printf("X");
                    girdi_var_x(a,b,dizi);
                    sira_degis(&oyuncu);
                    sayac++;
                    }
                    break;
                case 79: // o
                    if(dizi[satir][sutun]!=0 && dizi[satir][sutun]!=2 && oyuncu=='O')
                    {
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    printf("O");
                    girdi_var_o(a,b,dizi);
                    sira_degis(&oyuncu);
                    sayac++;
                    }
                    break;
                case 111: // O
                    if(dizi[satir][sutun]!=0 && dizi[satir][sutun]!=2 && oyuncu=='O')
                    {
                    saha_kontrol(&a,&b,&satir,&sutun);
                    gotoxy(a,b);
                    printf("O");
                    girdi_var_o(a,b,dizi);
                    sira_degis(&oyuncu);
                    sayac++;
                    }
                    break;
            }
            kazanan(toplam,dizi);
            if(sayac == 9)
            {
                gotoxy(35,25);
                printf("Kaybettiniz.");
            }
        }
}

int main()
{
    oyun_alani();
    gezinme();
    return 0;
}
