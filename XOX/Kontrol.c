#include "Kontrol.h"
#include <string.h>

void saha_kontrol(int* a, int* b, int* satir, int* sutun){
    if(*a<34){*a=34;*sutun=*sutun+1;}
    else if(*a>56){*a=56;*sutun=*sutun-1;}
    else if(*b<8){*b=8;*satir=*satir+1;}
    else if(*b>18){*b=18;*satir=*satir-1;}
}

void girdi_var_x(int k,int l,int dizi[3][3])
{
    if(k==34 && l==8){dizi[0][0]=0;}
    else if(k==34 && l==13){dizi[1][0]=0;}
    else if(k==34 && l==13){dizi[1][0]=0;}
    else if(k==34 && l==18){dizi[2][0]=0;}
    else if(k==45 && l==8){dizi[0][1]=0;}
    else if(k==45 && l==13){dizi[1][1]=0;}
    else if(k==45 && l==18){dizi[2][1]=0;}
    else if(k==56 && l==8){dizi[0][2]=0;}
    else if(k==56 && l==13){dizi[1][2]=0;}
    else if(k==56 && l==18){dizi[2][2]=0;}
}

void girdi_var_o(int k,int l,int dizi[3][3])
{
    if(k==34 && l==8){dizi[0][0]=2;}
    else if(k==34 && l==13){dizi[1][0]=2;}
    else if(k==34 && l==13){dizi[1][0]=2;}
    else if(k==34 && l==18){dizi[2][0]=2;}
    else if(k==45 && l==8){dizi[0][1]=2;}
    else if(k==45 && l==13){dizi[1][1]=2;}
    else if(k==45 && l==18){dizi[2][1]=2;}
    else if(k==56 && l==8){dizi[0][2]=2;}
    else if(k==56 && l==13){dizi[1][2]=2;}
    else if(k==56 && l==18){dizi[2][2]=2;}
}

char sira_degis(char* oyuncu)
{
    if(*oyuncu == 'X')
    {
       *oyuncu = 'O';
    }
    else
    {
        *oyuncu = 'X';
    }
    gotoxy(37,2);
    printf("Sira %c oyuncusunda",*oyuncu);
}
