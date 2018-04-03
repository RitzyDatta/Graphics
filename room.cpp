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
    line(h/2+50, 30, h/2+50+(h/4),200);
    line(h/2+50, 30, h/2+50-(h/4),140);
    line(0,200,h/6,50);
    line(300,200,h/6,50);
    setcolor(4);
    
    circle(h/3,80,30);
    
    setfillstyle(1,4);
    floodfill(h/3,80,4);
    rectangle(h/4,300,h/2+100,350);
    rectangle(h/4+50,350,h/2+50,600);
    rectangle(h/4+100,450,h/2,600);
    getch();
    return 0;
}
