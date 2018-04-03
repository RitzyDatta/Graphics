#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#define fx(x) (getmaxx()/2 +x)
#define fy(y) (getmaxy()/2 +y)

int main()
{
    int i;
    initwindow(640,480);
    circle(320,240,50);
    rectangle(100,200,300,380);
    getch();
}
