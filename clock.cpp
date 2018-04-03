#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define fx(x) ((getmaxx()/2)+x)
#define fy(y) ((getmaxy()/2)-y)
#define pi 3.1414
int main()
{
	initwindow(400,400);
	int x, y, i;
	float x1,y1,x2,y2,a,b,x3,y3,c,d,x4,y4;
	x=0;y=0;
	
    /*outtextxy(110,310,"TUE");
    outtextxy(160,310,"WED");
    outtextxy(210,310,"THU");
    outtextxy(260,310,"FRI");
    outtextxy(310,310,"SAT");*/
	circle(fx(x),fy(y),100);
	x1=65;y1=65;
	a=50;b=50;
	c=35;d=35;
	line(fx(x),fy(y),fx(x1),fy(y1));
	line(fx(x),fy(y),fx(a),fy(b));
	line(fx(x),fy(y),fx(c),fy(d));
	do
	{
		outtextxy(fx(x+0),fy(y)+70,"6");
		outtextxy(fx(x+0),fy(y+85),"|");
		outtextxy(fx(x+70),fy(y+0),"3 -");
		outtextxy(fx(x-70),fy(y+0),"- 9");
		outtextxy(fx(x+0),fy(y-85),"|");
		outtextxy(fx(x+0),fy(y)-70,"12");
		delay(1000);
		cleardevice();
		x2=x1*cos(i*pi/30)+y1*sin(i*pi/30);
		y2=(-x1)*sin(i*pi/30)+y1*cos(i*pi/30);
		x3=a*cos(i*pi/1800)+b*sin(i*pi/1800);
		y3=(-a)*sin(i*pi/1800)+b*cos(i*pi/1800);
		x4=c*cos(i*pi/108000)+d*sin(i*pi/108000);
		y4=(-c)*sin(i*pi/108000)+d*cos(i*pi/108000);
		circle(fx(x),fy(y),100);
		line(fx(x),fy(y),fx(x2),fy(y2));
		line(fx(x),fy(y),fx(x3),fy(y3));
		line(fx(x),fy(y),fx(x4),fy(y4));
		//circle(x2,y2,10);
		i++;	
	}
	while(!kbhit());
	closegraph();
	return 0;	
}
