#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)
void initial(int, int);
void bres(int,int,int,int);

main()
{
    int x1,y1,x2,y2,x;
    printf("\nenter starting coordinates: ");
    scanf("%d %d", &x1,&y1);
    printf("\nenter ending coordinates: ");
    scanf("%d %d", &x2,&y2);
    
    bres(x1,y1,x2,y2);
    getch();
}

void bres(int x1, int y1, int x2, int y2)
{
    initial(640,480);
    int dx,dy,di,ds,dt,x,y,s;
    dx=(abs)(x2-x1);
    dy=(abs)(y2-y1);
    di=2*dy-dx;
    ds=2*dy;
    dt=2*(dy-dx);
    
   if(x1>x2)
    {
        x=x2;
        y=y2;
        s=x1;
    }
    else
    {
        x=x1;
        y=y1;
        s=x2;
    }
    
    putpixel(fx(x),fy(y),10);
    while(x<s)
    {
        x++;
        if(di<0)
            di=di+ds;
        else
            {
                y++;
                di=di+dt;
            }
        putpixel(fx(x),fy(y),10);
        delay(10);
    }
}

void initial(int x, int y)
{
     initwindow(x,y);
     line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
     line(getmaxx()/2,0,getmaxx()/2,getmaxy());
     }     
