#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)

void rotation(int, int, int, int,int,int,int);
void triangle(int, int, int,int,int, int);
void initial(int, int);
main()
{
      int ch,x1, x2, x3, y1, y2, y3, c, r, q, nx1, nx2,nx3, ny1, ny2, ny3,i;
      int a1,a2,a3,b1,b2,b3;
      
      
      printf("enter the points of triangle: ");
      scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
       printf("\nenter speed");
      scanf("%d", &ch);
      
      initial(800,800);
      line(fx(x1),fy(y1), fx(x1), fy(y1+800));
      
      triangle(x1,y1,x2,y2,x3,y3);
      a1=x1;
      a2=x2;
      a3=x3;
      b1=y1;
      b2=y2;
      b3=y3;
      r=120;
      rotation(a1,b1,a2,b2,a3,b3,r);
      //triangle(a1,b1,a2,b2,a3,b3);
      
      q=-120;
      rotation(a1,b1,a2,b2,a3,b3,r);
      //triangle(a1,b1,a2,b2,a3,b3);
      
      
      
      i=10;
      while(!(kbhit()))
      {
                  
              delay(ch);
              cleardevice();
              line(fx(x1),fy(y1), fx(x1), fy(y1+400));
              rotation(x1,y1,x2,y2,x3,y3,i);
              rotation(a1,b1,a2,b2,a3,b3,r+i);
              rotation(a1,b1,a2,b2,a3,b3,q+i);
              i=i+10;
              }
      
      
      
getch();
}

void initial(int x, int y)
{
     initwindow(x,y);
    //line(0,y/2,x,y/2);
     //line(x/2,0,x/2,y);
     }     
                      
void triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
     line(fx(x1),fy(y1),fx(x2),fy(y2));
     line(fx(x2),fy(y2),fx(x3),fy(y3));
     line(fx(x3),fy(y3),fx(x1),fy(y1)); 
     }

void rotation(int x1, int y1,int x2,int y2, int x3,int y3,int r)
{
     int nx1, nx2,nx3, ny1, ny2, ny3;
     float t;
    //initial(640,480);
     //triangle(x1,y1,x2,y2,x3,y3);
                  
                  t=((3.14*r)/180);
                  nx1=(int)((x1*cos(t)-y1*sin(t))+0.5);
                  ny1=(int)((x1*sin(t)+y1*cos(t))+0.5);
                  nx2=(int)((x2*cos(t)-y2*sin(t))+0.5);
                  ny2=(int)((x2*sin(t)+y2*cos(t))+0.5);
                  nx3=(int)((x3*cos(t)-y3*sin(t))+0.5);
                  ny3=(int)((x3*sin(t)+y3*cos(t))+0.5);
                  
                 triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                 }
                  
