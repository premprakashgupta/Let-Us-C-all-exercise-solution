#include<stdio.h>
#include<graphic.h>
main()
{
	int gd=0,gm;
	initgraph(&gd,&gm,"C:\\bg i");
	circle(300,200,70);
	getch();
	closegraph();
	
}
