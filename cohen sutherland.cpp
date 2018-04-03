#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

#define fy(y) (getmaxy()-y)
int wxmin=100, wymin=100, wxmax=450, wymax=350;
int code(int x, int y)
{
    int value;
    value=8*(x<wxmin)+4*(x>wxmax)+2*(y<wymin)+(y>wymax);
    return value;
}

void lineclip(int x1, int y1, int x2, int y2)
{
     int c1, c2, dx, dy;
     c1= code(x1,y1);
     c2= code(x2,y2);
     while(c1|c2)
     {
                 if(c1&c2)
                          return;
                 dx=x2-x1;
                 dy=y2-y1;
                 if(c1)
                 {
                       if(c1&8)
                       {
                               y1=int(y1+(wxmin-x1)*dy/dx);
                               x1=wxmin;
                               }
                       else
                           if(c1&4)
                           {
                                   y1=int(y1+(wxmax-x1)*dy/dx);
                                   x1=wxmax;
                                   }
                           else
                               if(c1&2)
                               {
                                       x1=int(x1+(wymin-y1)*dx/dy);
                                       y1=wymin;
                                       }
                               else
                                   if(c1&1)
                                   {
                                       x1=int(x1+(wymax-y1)*dx/dy);
                                       y1=wymax;
                                       }
                       c1=code(x1,y1);
                       }
                 else
                     {
                           if(c2&8)
                           {
                               y2=int(y2+(wxmin-x2)*dy/dx);
                               x2=wxmin;
                               }
                           else
                               if(c2&4)
                               {
                                   y2=int(y2+(wxmax-x2)*dy/dx);
                                   x2=wxmax;
                                   }
                               else
                                    if(c2&2)
                                    {
                                       x2=int(x2+(wymin-y2)*dx/dy);
                                       y2=wymin;
                                       }
                                    else
                                        if(c2&1)
                                        {
                                                x2=int(x2+(wymax-y2)*dx/dy);
                                                y2=wymax;
                                                }
                           c2=code(x2,y2);
                           }
                           }
                           
                 //setcolor(4);
                 
                 line(x1,y1,x2,y2);
                 return;
                 }
                 

main()
{
      int x1,y1,x2,y2,c1,c2;
      printf("enter the two end points: ");
      scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
      initwindow(640,640);
      rectangle(wxmin,wymin,wxmax,wymax);
      //setcolor(14);
      line(x1,y1,x2,y2);
      delay(3000);
      
      cleardevice();
      rectangle(wxmin,wymin,wxmax,wymax);
      
      lineclip(x1,y1,x2,y2);
      //closegraph();
      getch();
      }
