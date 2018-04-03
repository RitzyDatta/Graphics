#include<math.h>
#include<conio.h>
#include<graphics.h>
#define fx(x) (getmaxx()/2+x)
#define fy(y) (getmaxy()/2-y)
int main(void)
{
    int xi,yi,xf,yf,x,y,dx,dy,d,t,m=1,n=1,f=0;
    printf("Enter the initial and final points:");
    scanf("%d%d%d%d",&xi,&yi,&xf,&yf);
    initwindow(800,800);
    setcolor(RED);
    circle(fx(xi),fy(yi),3);
    circle(fx(xf),fy(yf),3);
    setcolor(WHITE);
    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
    line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    if(abs(xf-xi)<abs(yf-yi))
    {
                             t=xi;xi=yi;yi=t;
                             t=xf;xf=yf;yf=t;
                             f=1;                             
    }
    dx=abs(xf-xi);
    dy=abs(yf-yi);
    d=2*dy-dx;
    if(xf<xi)m=-1;
    if(yf<yi)n=-1;
    x=xi;
    y=yi;
    while(x!=xf)
    {
                x=x+m;
                if(d>=0)
                {
                        y=y+n;
                        d+=2*(dy-dx);
                }
                else
                d+=2*dy;
                if(f==0)
                putpixel(fx(x),fy(y),YELLOW);
                if(f==1)
                putpixel(fx(y),fy(x),YELLOW);
                delay(20);
    }
    getch();
    return 0; 
}
