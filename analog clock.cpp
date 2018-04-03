#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#define fx(x) (getmaxx()/2 + x)
#define fy(y) (getmaxy()/2 - y)
#define pi 3.1414
int main()
{
	int x, y, i, hr, mnt, h, m, r, nt,nt1,k;
	float nx1, ny1, nc,nd,na,nb,t,t1,t2, na1,nb1;
	float x1,y1,x2,y2,a,b,x3,y3,c,d,x4,y4;
	printf("\nenter center of the clock");
	scanf("%d%d", &x, &y);
	printf("\nenter current time-");
	printf("\nhour- ");
	scanf("%d",&hr);
	printf("\nminute- ");
	scanf("%d",&mnt);
	
	switch(hr)
	{
		case 1:
		case 13:
			h=1;
			break;
		case 2:
		case 14:
			h=2;
		case 3:
		case 15:
			h=3;
			break;
		case 4:
		case 16:
			h=4;
		case 5:
		case 17:
			h=5;
			break;
		case 6:
		case 18:
			h=6;
		case 7:
		case 19:
			h=7;
			break;
		case 8:
		case 20:
			h=8;
			break;
		case 9:
		case 21:
			h=9;
			break;
		case 10:
		case 22:
			h=10;
			break;
		case 11:
		case 23:
			h=11;
			break;
		case 12:
		case 00:
			h=0;
			break;
	}
	
	
	
	initwindow(800,800);
	//circle(fx(x),fy(y),100);
	x1=x;y1=60; a=x; b=70; c=x;d=80;
	
	//line(fx(x),fy(y),fx(x1),fy(y1)); // hour
	//line(fx(x),fy(y),fx(a),fy(b));  // minute
	//line(fx(x),fy(y),fx(c),fy(d));  //sec
	i=1;
	int j=0;
	k=6;
	delay(2000);
	do
	{
		
		
	outtextxy(fx(x+0),fy(y+70),"6");
	outtextxy(fx(x+0),fy(y+85),"|");
	outtextxy(fx(x+70),fy(y+0),"3 -");
	outtextxy(fx(x-70),fy(y+0),"- 9");
	outtextxy(fx(x+0),fy(y-85),"|");
	outtextxy(fx(x+0),fy(y-70),"12");
	circle(fx(x),fy(y),100);
	
	
//	cleardevice();
		
		r=30*h;
		t=((3.14*r)/180);
		
		nx1=(x1*cos(t)+y1*sin(t));
        ny1=((-x1)*sin(t)+y1*cos(t));
		
		t1=((3.14*mnt*6)/180);
		
		na=(a*cos(t1)+b*sin(t1));
        nb=((-a)*sin(t1)+b*cos(t1));
        j=mnt;
		
		t2=((3.14*k)/180);
		nc=(c*cos(t2)+d*sin(t2));
        nd=((-c)*sin(t2)+d*cos(t2));
		k=k+6;
        
        if(j==60)
		{
			j=0;
			
		t=((3.14*30)/180);
		
		x2=(nx1*cos(t)+ny1*sin(t));
        y2=((-nx1)*sin(t)+ny1*cos(t));
    	
        line(fx(x),fy(y),fx(x2),fy(y2)); //hour
        h++;
        mnt=0;
		}
		else
		{
			line(fx(x),fy(y),fx(nx1),fy(ny1)); // hour
		}
		
        
		if(i==60)
		{
			int na1, nb1;
			i=1;
		/*	t1=((3.14*1)/180);
			na1=(na*cos(t1)+nb*sin(t1));
        	nb1=((-na)*sin(t1)+nb*cos(t1));
    	
        	line(fx(x),fy(y),fx(na1),fy(nb1)); */
        	mnt++;
        }
		else
		{
			line(fx(x),fy(y),fx(na),fy(nb));  // minute
		}
		
	
		line(fx(x),fy(y),fx(nc),fy(nd));  //sec
		i++;
		delay(1000);
		cleardevice();
	}
	while(1);
		
	getch();
}
	
