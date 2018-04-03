#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)
void initial(int, int);

main()
{
    int x1,y1,x2,y2,i,dx,dy, length,x,y;
    float xinc,yinc;
    printf("\nenter starting coordinates: ");
    scanf("%d %d", &x1,&y1);
    printf("\nenter ending coordinates: ");
    scanf("%d %d", &x2,&y2);
    
    dx=x2-x1;
    printf("\dx= ", dx);
    dy=y2-y1;
    
    
    if(abs(dx)>abs(dy))
        length=abs(dx);
    else
        length=abs(dy);
    xinc=dx/(float)length;
    printf("\nxinc= ", xinc);
    yinc=dy/(float)length;
    x=x1;
    y=y1;
    initial(800,800);
    putpixel(fx(x),fy(y),10);
    
    for(i=0;i<length;i++)
    {
            putpixel(fx(x),fy(y),10);
            x=(int)(x+xinc);
            y=(int)(y+yinc);
            delay(10);
        }
    getch();
}

void initial(int x, int y)
{
     initwindow(x,y);
     line(0,getmaxy()/2,x,getmaxy()/2);
     line(getmaxx()/2,0,getmaxx()/2,y);
     }         
