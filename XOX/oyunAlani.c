#include <stdio.h>
#include "oyunAlani.h"
#include <windows.h>

void gotoxy(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(hConsole, coord);
}

void oyun_alani()
{
    for(int x=30; x<=60; x++)
    {
        gotoxy(x,10);
        printf("-");
        gotoxy(x,15);
        printf("-");
    }
    for(int y=6; y<=20; y++)
    {
        gotoxy(40,y);
        printf("|");
        gotoxy(50,y);
        printf("|");
    }
}
