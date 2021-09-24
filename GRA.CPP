#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
   clrscr();
   int x,y;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI\\");
   putpixel(x,y,1);
   closegraph();
   getch();
}