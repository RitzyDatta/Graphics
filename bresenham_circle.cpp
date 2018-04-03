#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)

void circle_bres(int,int,int);
void draw_circle(int,int,int,int);
void initial(int, int);

main()
{
    int xc, yc, r;
    printf("enter center coordinates of the circle: ");
    scanf("%d %d", &xc, &yc);
    printf("\nenter radius: ");
    scanf("%d", &r);
    circle_bres(xc,yc,r);
    getch();
}

void circle_bres(int xc, int yc, int r)
{
   initial(640,480);
    int x, y;
    x=0, y=r;
    int d=3-2*r;
    
    while(x<y)
    {
        draw_circle(xc,yc,x,y);
        x++;
        if(d<0)
            d=d+4*x+6;
        else
        {
            y--;
            d=d+4*(x-y)+10;
        }
        draw_circle(xc,yc,x,y);
        delay(50);
    }
}

void draw_circle(int xc, int yc, int x, int y)
{
    putpixel(fx(xc+x), fy(yc+y), 7);
    putpixel(fx(xc-x), fy(yc+y), 7);
    putpixel(fx(xc+x), fy(yc-y), 7);
    putpixel(fx(xc-x), fy(yc-y), 7);
    putpixel(fx(xc+y), fy(yc+x), 7);
    putpixel(fx(xc-y), fy(yc+x), 7);
    putpixel(fx(xc+y), fy(yc-x), 7);
    putpixel(fx(xc-y), fy(yc-x), 7);
}

void initial(int x, int y)
{
     initwindow(x,y);
     line(0,y/2,x,y/2);
     line(x/2,0,x/2,y);
     }     
