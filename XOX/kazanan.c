#include "kazanan.h"
#include "Kontrol.h"

void kazanan(int toplam, int dizi[3][3])
{
    if(dizi[0][0]+dizi[0][1]+dizi[0][2]==0 || dizi[0][0]+dizi[0][1]+dizi[0][2]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[1][0]+dizi[1][1]+dizi[1][2]==0 || dizi[1][0]+dizi[1][1]+dizi[1][2]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[2][0]+dizi[2][1]+dizi[2][2]==0 || dizi[2][0]+dizi[2][1]+dizi[2][2]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[0][0]+dizi[1][0]+dizi[2][0]==0 || dizi[0][0]+dizi[1][0]+dizi[2][0]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[0][1]+dizi[1][1]+dizi[2][1]==0 || dizi[0][1]+dizi[1][1]+dizi[2][1]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[0][2]+dizi[1][2]+dizi[2][2]==0 || dizi[0][2]+dizi[1][2]+dizi[2][2]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[0][0]+dizi[1][1]+dizi[2][2]==0 || dizi[0][0]+dizi[1][1]+dizi[2][2]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
    else if(dizi[0][2]+dizi[1][1]+dizi[2][0]==0 || dizi[0][2]+dizi[1][1]+dizi[2][0]==6 )
    {
        gotoxy(35,25);
        printf("Tebrikler kazandiniz");
    }
}
