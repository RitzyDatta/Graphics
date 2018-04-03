#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)

void initial(int, int);
void BoundaryFill4nbd(int,int,int,int);
void flood(int,int,int,int);
main()
{
    int xc, yc, r,cb,cf,cf1;
    printf("enter center coordinates of the circle: ");
    scanf("%d %d", &xc, &yc);
    printf("\nenter radius: ");
    scanf("%d", &r);
    initial(800,800);
    setcolor(14);
    circle(fx(xc),fy(yc),r);
    cb=14;
    cf=4;
    cf1=1;
    BoundaryFill4nbd(xc,yc,cb,cf);
    flood(xc,yc,cf,cf1);
    getch();
}

void initial(int x, int y)
{
     initwindow(x,y);
     //line(0,y/2,x,y/2);
     //line(x/2,0,x/2,y);
     }     
void BoundaryFill4nbd(int x,int y,int cb,int cf)
{
     int colour;
     colour=getpixel(fx(x),fy(y));
     if(colour!=cb && colour!=cf)
     {
                   putpixel(fx(x),fy(y),cf);
                   BoundaryFill4nbd(x+1,y,cb,cf);  
                   BoundaryFill4nbd(x,y+1,cb,cf); 
                   BoundaryFill4nbd(x-1,y,cb,cf); 
                   BoundaryFill4nbd(x,y-1,cb,cf);
                   //delay(10);      
     }     
}
void flood(int x,int y,int cf, int cf1)
{
    
    int colour;
     colour=getpixel(fx(x),fy(y));
     if(colour==cf)
     {
                   putpixel(fx(x),fy(y),cf1);
                   flood(x+1,y,cf,cf1);  
                   flood(x,y+1,cf,cf1); 
                   flood(x-1,y,cf,cf1); 
                   flood(x,y-1,cf,cf1);
                   //delay(10);      
     }     
}
