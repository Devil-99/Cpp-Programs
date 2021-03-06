

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
#include<math.h>
#include<string.h>
#define rx rad
int main()
{
 int gd=DETECT,gm,ch,y;
 float x1,x2,y1,y2,x3,y3,r,h,sx,sy,deg,rad,x4,y4,xn1,yn1,xn2,yn2,x1n1,x2n2,y1n1,y2n2,lk;
initgraph(&gd,&gm,"");
 do{
    printf("Press \n1 to draw a line\n2 to draw a circle\n3 to draw a rectangle\n4 to draw a triangle\nEnter Your choice : ");
    scanf("%d",&ch);
    setcolor(CYAN);
    switch(ch)
    {
   case 1:
    printf("Enter end points : ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    line(x1,y1,x2,y2);
    printf("Enter \n1 for translation \n2 for scaling\n3 for rotation\nEnter your choice : ");
    scanf("%d",&y);
    switch(y)
    {
    case 1:
        printf("Enter translation factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1+sx;
        x2=x2+sx;
        y1+=sy;
        y2+=sy;
        line(x1,y1,x2,y2);
        setcolor(YELLOW);
        outtextxy(250,250,"TRANSLATION");
        break;
    case 2:
        printf("Enter scaling factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1*sx;
        x2=x2*sx;
        y1*=sy;
        y2*=sy;
        line(x1,y1,x2,y2);
        setcolor(YELLOW);
        outtextxy(250,250,"SCALING");
        break;
    case 3:     printf("Enter the angle to rotate : ");
                scanf("%f",&deg);
                rad=deg*3.14/180.0;
                lk=x2-x1;
                 x2=x1+((lk)*cos(rad)-(lk)*sin(rad));
                 y2=y1+((lk)*sin(rad)+(lk)*cos(rad));
                 line(x1,y1,x2,y2);
        setcolor(YELLOW);
        outtextxy(250,250,"ROTATION");
        break;
    }
    break;
   case 2:
       printf("Enter centre coordinates : ");
           scanf("%f%f",&x1,&y1);
           printf("Enter radius : ");
           scanf("%f",&r);
    circle(x1,y1,r);
      printf("Enter \n1 for translation \n2 for scaling\n3 for rotation\nEnter your choice : ");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
        printf("Enter translation factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1+sx;
        y1+=sy;
       circle(x1,y1,r);
       setcolor(YELLOW);
       outtextxy(250,250,"TRANSLATION");
       break;
        case 2:
        printf("Enter scaling factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1*sx;
        y1*=sy;
       circle(x1,y1,r);
       setcolor(YELLOW);
       outtextxy(250,250,"SCALING");
       break;
    }
    break;
    case 3:
      printf("Enter end points : ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    rectangle(x1,y1,x2,y2);
      printf("Enter \n1 for translation \n2 for scaling\n3 for rotation\nEnter your choice : ");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
        printf("Enter translation factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1+sx;
        x2=x2+sx;
        y1+=sy;
        y2+=sy;
        rectangle(x1,y1,x2,y2);
        setcolor(YELLOW);
        outtextxy(250,250,"TRANSLATION");
        break;
        case 2:
        printf("Enter scaling factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1*sx;
        x2=x2*sx;
        y1*=sy;
        y2*=sy;
        rectangle(x1,y1,x2,y2);
        setcolor(YELLOW);
        outtextxy(250,250,"SCALING");
        break;
         case 3:
               printf("Enter the angle to rotate : ");
                scanf("%f",&deg);
                rad=deg*3.14/180.0;
                rad=-rad;
                 xn1=x1*cos(rx)-y1*sin(rx);
yn1=y1*cos(rx)+x1*sin(rx);
xn2=x2*cos(rx)-y2*sin(rx);
yn2=y2*cos(rx)+x2*sin(rx);
x1n1=x2*cos(rx)-y1*sin(rx);
y1n1=y1*cos(rx)+x2*sin(rx);
x2n2=x1*cos(rx)-y2*sin(rx);
y2n2=y2*cos(rx)+x1*sin(rx);
line(xn1,yn1,x1n1,y1n1);
line(x1n1,y1n1,xn2,yn2);
line(xn2,yn2,x2n2,y2n2);
line(x2n2,y2n2,xn1,yn1);

        setcolor(YELLOW);
        outtextxy(250,250,"ROTATION");
    }
    break;
    case 4:
          printf("Enter end points : ");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
      printf("Enter \n1 for translation \n2 for scaling\n3 for rotation\nEnter your choice : ");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
        printf("Enter translation factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1+sx;
        x2=x2+sx;
        x3+=sx;
        y3+=sy;
        y1+=sy;
        y2+=sy;
        line(x1,y1,x2,y2);
            line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);
        setcolor(YELLOW);
        outtextxy(250,250,"TRANSLATION");
        break;
        case 2:
        printf("Enter scaling factor of x and then y : ");
        scanf("%f%f",&sx,&sy);
        x1=x1*sx;
        x2=x2*sx;
        x3*=sx;
        y3*=sy;
        y1*=sy;
        y2*=sy;
        line(x1,y1,x2,y2);
            line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    setcolor(YELLOW);
    outtextxy(250,250,"SCALING");
    break;
        case 3:
               printf("Enter the angle to rotate : ");
                scanf("%f",&deg);
                rad=deg*3.14/180.0;
                lk=x2-x1;
                 x2=x1+((lk)*cos(rad)-(y2-y1)*sin(rad));
                 y2=y1+((lk)*sin(rad)+(y2-y1)*cos(rad));
                 lk=x3-x1;
                 x3=x1+((lk)*cos(rad)-(y3-y1)*sin(rad));
                 y3=y1+((lk)*sin(rad)+(y3-y1)*cos(rad));
                 line(x1,y1,x2,y2);
                  line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
        setcolor(YELLOW);
        outtextxy(250,250,"ROTATION");
    }
    break;}


    printf("Do you want to continue (1/0) : ");
    scanf("%f",&h);
        cleardevice();
 }while(h==1);
    closegraph();
 return 0;
}

