#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT ,gm;
int x1,y1,x2,y2,steps,k,dx,dy;
float x,y,xinc,yinc;
initgraph (&gd,&gm,"c:\\TC\\BGI");
clrscr();
printf("Enter First point :");
scanf("%d%d",&x1,&y1);
printf("Enter Second point :");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)<abs(dy))
steps=abs(dy);
else
steps=abs(dy);
xinc=dx/steps;
yinc=dy/steps;
x=x1;
y=y1;

putpixel(x,y,RED);
for(k=1;k<=steps;k++)
	{
	x=x+xinc;
	y=y+yinc;
	putpixel(x,y,RED);
	}
getch();
closegraph();
}


