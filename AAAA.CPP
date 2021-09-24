#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
   clrscr();
   int gd=DETECT,gm;
   int  x1,y1,x2,y2,dx,dy,step;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI\\");
   printf("enter starting point:");
   scanf("%d%d",&x1,&y1);
    printf("enter end point:");
   scanf("%d%d",&x2,&y2);
   dx=x2-x1;
   dy=y2-y1;
   if (abs(dx)<abs(dy))
   step=abs(dy);
   else
   step=abs(dx);
  float incrx=dx/step;
  float incry=dy/step;
  float x=x1;
  float y=y1;
  putpixel(x,y);
  for(i=1;i<=step;i++)
  {
     x=x+incrx;
     y=y+incry;
     putpixel(x,y,RED);
  }
  getch();
  closegraph();


}