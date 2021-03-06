#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>
#include<time.h>
#include<windows.h>
using namespace std;
time_t T;


int main()
{
    int s;
    int cx,cy,r=100,x,y,q;
    cx=getmaxx();
    cy=getmaxy();
    cx/=2;
    cy/=2;
    //scanf("%d%d%d",&cx,&cy,&r);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    double a;
    while(!kbhit()){
            Sleep(1);
    struct tm *t=localtime(&T);    s=t->tm_sec;
    a=(s*(3.14/30))-(3.14/2);
    setcolor(WHITE);
    line(cx,cy,cx+r*cos(a),cy+r*sin(a));}
    /*while(1)
    {setcolor(3);
    circle(cx,cy,r);
    x=x+r*sin(30);
    y=y+r*cos(-30);
    setcolor(5);
    line(cx,cy,x,y);
    delay(1000);
    cleardevice();
    }
*/
    getch();
    closegraph();
    return 0;
}
