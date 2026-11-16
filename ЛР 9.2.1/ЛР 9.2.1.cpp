//ЛР 9.2.1.cpp
//головний файл проєкту – функція main

#include <stdio.h>
#include <conio.h>

#include "macro.h"

#define Z 3              

void main()
{
    puts("Lab 9.2.1. Using macros and preprocessing directive");
    float x, y,         
        w;           
    char ch;            
    do
    {
        puts("Input x and y");
        scanf("%f", &x);
        PRINTR(x);      
        scanf("%f", &y);
        PRINTR(y);

#if (Z>0)&&(Z<5)    
        
        puts("0 < z < 5 : w = min (x^2 + y + z, xyz)");
        w = MIN(SQR(x) + y + Z, x * y * Z);

#else               
        puts("z <= 0 or z >= 5 : w = max (x^2 + (y+z)^2, xy)");
        w = MAX(SQR(x) + SQR(y + Z), x * y);

#endif              

        PRINTR(w);          
        puts("Repeat? y /n "); ch = getch();
    } while (ch == 'y');
}