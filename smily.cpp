#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#define fx(x) (getmaxx()/2 +x)
#define fy(y) (getmaxy()/2 -y)
int main()
{
    int w,h,x,y,c;
    printf("enter height and width");
    scanf("%d %d", &h, &w);
    initwindow(w,h);
    circle(fx(0),fy(0),30);
    circle(fx(0),fy(-100),40);
    circle(fx(0),fy(0),200);
    circle(fx(100),fy(100),30);
    circle(fx(-100),fy(100),30);
    
    getch();
    return 0;
}
