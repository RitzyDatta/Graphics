#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)

void triangle(int, int, int,int,int, int);
void initial(int, int);
main()
{
      int ch,x1, x2, x3, y1, y2, y3, c, sx, sy, tx, ty, r, nx1, nx2,nx3, ny1, ny2, ny3,shx, shy;
      float t;
      
      printf("enter the points of triangle: ");
      scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
      
      printf("\n1:rotation then translation\n2:translation then rotation");
      printf("\nenter your choice");
      scanf("%d", &ch);
      
      switch (ch)
      {
             case 1:
                  printf("\nenter the angle of rotation");
                  scanf("%d", &r);
                  printf("\nenter translation factor: ");
                  scanf("%d %d", &tx, &ty);
                  
                  initial(640,480);     
                 triangle(x1,y1,x2,y2,x3,y3);
    
                  
                  nx1=(int)(x1*cos(t)-y1*sin(t)+tx);
                  ny1=x1*sin(t)+y1*cos(t)+ty;
                  nx2=x2*cos(t)-y2*sin(t)+tx;
                  ny2=x2*sin(t)+y2*cos(t)+ty;
                  nx3=x3*cos(t)-y3*sin(t)+tx;
                  ny3=x3*sin(t)+y3*cos(t)+ty;
                  
                  triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                  break;
                  
             case 2:
                  printf("\nenter translation factor: ");
                  scanf("%d %d", &tx, &ty);
                  printf("\nenter the angle of rotation");
                  scanf("%d", &r);
                   
                   initial(640,480);     
                   triangle(x1,y1,x2,y2,x3,y3);
                   
                   nx1=x1*cos(t)-y1*sin(t)+tx*cos(t)-ty*sin(t);
                   ny1=x1*sin(t)+y1*cos(t)+tx*sin(t)+ty*cos(t);
                   nx2=x2*cos(t)-y2*sin(t)+tx*cos(t)-ty*sin(t);
                   ny2=x2*sin(t)+y2*cos(t)+tx*sin(t)+ty*cos(t);
                   nx3=x1*cos(t)-y3*sin(t)+tx*cos(t)-ty*sin(t);
                   ny3=x3*sin(t)+y3*cos(t)+tx*sin(t)+ty*cos(t);
                   
                   triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                  break;
                  
             default:
                        printf("\nwrong choice");
                        getch();
                        break;
                  }
getch();
}
void initial(int x, int y)
{
     initwindow(x,y);
     line(0,getmaxy()/2,x,getmaxy()/2);
     line(getmaxx()/2,0,getmaxx()/2,y);
     }    
                      
void triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
     line(fx(x1),fy(y1),fx(x2),fy(y2));
     line(fx(x2),fy(y2),fx(x3),fy(y3));
     line(fx(x3),fy(y3),fx(x1),fy(y1)); 
     }

