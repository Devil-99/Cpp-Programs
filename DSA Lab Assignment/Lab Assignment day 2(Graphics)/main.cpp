#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3 ;
float b1,b2;
float t=1.00,deg;
initgraph(&gd,&gd," ");

//scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
x1=200;
y1=200;
x2=200;
y2=100;

/*setcolor(9);
circle(200,200,100);
line(x1,y1,x2,y2);
getch();
cleardevice();
//printf("Enter the angle of rotation: ");
//scanf("%f",&deg);*/
while(1)
{
t=(22*(6.00))/(180*7);
x2=x2-((x2*cos(t))-(y2*sin(t)));
y2=y2-((x2*sin(t))+(y2*cos(t)));
circle(200,200,100);
line(x1,y1,x2,y2);
delay(1000);
cleardevice();}
getch();
closegraph();
return 0;
}
