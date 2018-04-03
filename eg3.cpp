#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#define fx(x) (getmaxx()/2 +x)
#define fy(y) (getmaxy()/2 +y)

int main()
{
    int i;
    initwindow(700,600);
    for(i=10;i<=300;i=i+10)
    {
                        // setcolor(RED);  
                         circle(320,240,i);                         
                         delay(10);
                        cleardevice();
    }
    for(i=200;i>=10;i--)
    
      //setcolor(RED);  
      circle(320,240,i);                         
      delay(10);
      cleardevice();                    
    
    
    getch();
}
