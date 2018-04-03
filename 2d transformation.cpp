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
      
      while(1)
      {
      printf("\n1:translation\n2:rotation\n3:scalling\n4:shearing\n5:exit");
      printf("\nenter your choice");
      scanf("%d", &ch);
	  
      switch(ch)
      {
                case 1:
                      printf("\nenter translation factor: ");
                      scanf("%d %d", &tx, &ty);
                      
                      initial(640,480);
                      
                      triangle(x1,y1,x2,y2,x3,y3);
    
                      
                      nx1=x1+tx;
                      ny1=y1+ty;
                      nx2=x2+tx;
                      ny2=y2+ty;
                      nx3=x3+tx;
                      ny3=y3+ty;
                      
                      triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                      
                      break;
                      
              case 2:
                  printf("\nenter the angle of rotation");
                  scanf("%d", &r);
                  
                  initial(640,480);
                        
                  triangle(x1,y1,x2,y2,x3,y3);
                  
                  t=((3.14*r)/180);
                  nx1=(int)((x1*cos(t)-y1*sin(t))+0.5);
                  ny1=(int)((x1*sin(t)+y1*cos(t))+0.5);
                  nx2=(int)((x2*cos(t)-y2*sin(t))+0.5);
                  ny2=(int)((x2*sin(t)+y2*cos(t))+0.5);
                  nx3=(int)((x3*cos(t)-y3*sin(t))+0.5);
                  ny3=(int)((x3*sin(t)+y3*cos(t))+0.5);
                  
                 triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                  
                  break;
                  
              case 3:
                   printf("\nenter scaling factor: ");
                   scanf("%d %d", &sx, &sy);
                   initial(640,480);
                        
                  triangle(x1,y1,x2,y2,x3,y3);
                  
                  nx1=x1*sx;
                  ny1=y1*sy;
                  nx2=x2*sx;
                  ny2=y2*sy;
                  nx3=x3*sx;
                  ny3=y3*sy;
                  
                  triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                  break;
                  
              case 4:
                   printf("\nenter shearing factor: ");
                   scanf("%d %d", &shx, &shy);
                   
                   initial(640,480);
                  triangle(x1,y1,x2,y2,x3,y3);
                  rectangle(-10,90,-30,90);
                  
                  nx1=x1+shx*y1;
                  ny1=y1+shy*x1;
                  nx2=x2+shx*y2;
                  ny2=y2+shy*x2;
                  nx3=x3+shx*y3;
                  ny3=y3+shy*x3;
                  
                  triangle(nx1,ny1,nx2,ny2,nx3,ny3);
                  
                  break;
                  
               case 5:
               		exit(1);
                default:
                        printf("\nwrong choice");
                        getch();
                        exit(1);
                        break;
                        }
            getch();
            cleardevice();
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
