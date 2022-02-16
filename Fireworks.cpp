#include <iostream>
#include <conio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coordinates;     // coordinates is declared as COORD
    coordinates.X = x;     // defining x-axis
    coordinates.Y = y;     //defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main()
{
    int x1 = 60,  y1 = 15,   x2 = 60,  y2 = 15, x3 = 60, y3 = 16;
    int x4 = 60,  y4 = 15,   x5 = 60,  y5 = 15, x6 = 60, y6 = 15;
    int x7 = 60,  y7 = 15,   x8 = 60,  y8 = 15;
    int x10 = 60, y10 = 15, x9 = 60,  y9 = 15;
    int x12 = 60, y12 = 15, x11 = 60, y11 = 15;
    int x13 = 60, y13 = 15, x14 = 60, y14 = 15;
    int x15 = 60, y15 = 15, x16 = 60, y16 = 15;
    int x = 60,   y = 25;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 7);
    for (int i = 0; i < 10; i++) 
	{
        cout << "|";
        gotoxy(x, y);
        y--;
        Sleep(200);
    }
    system("CLS");

    for (int j = 0; j < 13; j++)
	 {
        gotoxy(x1, y1);
        cout << "*";
        y1--;
        gotoxy(x2, y2);
        cout << "*";
        x2--;
        y2--;
        gotoxy(x3, y3);
        cout << "*";
        x3 -= 2;
        y3--;
        gotoxy(x4, y4);
        cout << "*";
        x4 -= 4;
        y4--;
        gotoxy(x5, y5);
        cout << "*";
        x5--;
        cout << " ";
        x5--;
        cout << " ";
        x5--;
        gotoxy(x6, y6);
        cout << "*";
        x6--;
        y6++;
        gotoxy(x7, y7);
        cout << "*";
        x7 -= 2;
        y7++;
        gotoxy(x8, y8);
        cout << "*";
        y8++;
        x8 -= 4;
        gotoxy(x9, y9);
        cout << "*";
        y9++;
        gotoxy(x10, y10);
        cout << "*";
        y10++;
        x10++;
        gotoxy(x11, y11);
        cout << "*";
        y11++;
        x11 += 2;
        gotoxy(x12, y12);
        cout << "*";
        y12++;
        x12 += 4;
        gotoxy(x13, y13);
        cout << "*";
        x13++;
        cout << " ";
        x13++;
        cout << " ";
        x13++;
        gotoxy(x14, y14);
        cout << "*";
        y14--;
        x14++;
        gotoxy(x15, y15);
        cout << "*";
        y15--;
        x15 += 2;
        gotoxy(x16, y16);
        cout << "*";
        y16--;
        x16 += 4;

        Sleep(100);
    }
    gotoxy(100, 28);
    return 0;
}
