#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>
#include <windows.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
struct timedata
{
    int hour;
    int miniute;
    int second;

};
struct timedata getTime()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    struct timedata data;
    data.hour = tm.tm_hour;
    data.miniute = tm.tm_min;
    data.second = tm.tm_sec;
    return data;
}

void digitalclock()
{
      time_t t = time(NULL);
      struct tm *tm = localtime(&t);
      char MY_TIME[50];
      char MY_DATE[50];
      strftime(MY_TIME, sizeof(MY_TIME), "%I:%M:%S %p", tm);
      strftime(MY_DATE, sizeof(MY_DATE), "%a %d %b, %Y", tm);
      settextstyle(4, HORIZ_DIR, 7);
      setcolor(12);
      int midx = getmaxx()/2;
      int midy = getmaxy()/2;
      outtextxy(midx-275,midy,MY_TIME);
      settextstyle(8, HORIZ_DIR, 5);
      outtextxy(midx-220,midy-100,MY_DATE);
}

void drawHands(int radius)
{
    int centerx = getmaxx() / 2;
    int centery = getmaxy() / 2;
    float angle=-90;
    setcolor(RED);
    struct timedata data = getTime();
    int s = data.second;
    int sx=centerx+(radius-35)*cos((angle+s*6-6)*PI/180);
    int sy=centery+(radius-35)*sin((angle+s*6-6)*PI/180);
    line(centerx,centery,sx,sy);

    setcolor(YELLOW);
    s=data.miniute;
    int second = data.second;
    sx=centerx+(radius-60)*cos((angle+s*6/*+second*0.1*/)*PI/180);
    sy=centery+(radius-60)*sin((angle+s*6/*+second*0.1*/)*PI/180);
    line(centerx,centery,sx,sy);

    setcolor(GREEN);
    s=data.hour;
    int miniute = data.miniute;
    sx=centerx+(radius-80)*cos((angle+s*30+0.5*miniute)*PI/180);
    sy=centery+(radius-80)*sin((angle+s*30+0.5*miniute)*PI/180);
    line(centerx,centery,sx,sy);
}


void analogclock()
{
    int centerx = getmaxx()/2;
    int centery = getmaxy()/2;
    int radius =200;
    setcolor(11);
    circle(centerx, centery, 200);
    int x[12],y[12];
    x[0]=centerx-15,y[0] = centery-190;
    x[3]=centerx+180,y[3] = centery-10;
    x[9]=centerx-190,y[9] = centery-10;
    x[6]=centerx-7,y[6] = centery+175;
    x[1] = centerx + sin(PI/6)*radius-20,y[1] = centery-cos(PI/6)*radius;
    x[2] = centerx + sin(PI/3)*radius-20,y[2] = centery-cos(PI/3)*radius;
    x[4] = centerx + sin(PI/3)*radius-20,y[4] = centery+cos(PI/3)*radius-20;
    x[5] = centerx + sin(PI/6)*radius-20,y[5] = centery+cos(PI/6)*radius-20;
    x[7] = centerx - sin(PI/6)*radius+5,y[7] = centery+cos(PI/6)*radius-20;
    x[8] = centerx - sin(PI/3)*radius+5,y[8] = centery+cos(PI/3)*radius-20;
    x[10] = centerx - sin(PI/3)*radius,y[10] = centery-cos(PI/3)*radius+5;
    x[11] = centerx - sin(PI/6)*radius,y[11] = centery-cos(PI/6)*radius+5;
    setcolor(WHITE);
    settextstyle(10,HORIZ_DIR,3);
    char num[2];
    int i;
    for(i=0;i<12;i++)
    {
        if(i==0)
             outtextxy(x[0],y[0],"12");
        else if(i==11)
             outtextxy(x[11],y[11],"11");
        else if(i==10)
             outtextxy(x[10],y[10],"10");
        else
        {
             num[0] = i+'0';
             num[1]='\0';
             outtextxy(x[i],y[i],num);
        }
    }
}

int main()
{
        int gDriver = DETECT;
        int gMode;
        initgraph(&gDriver, &gMode, NULL);
        int flag=0;
        while(1)
        {
            if(kbhit())
            {
                char c=getch();
                if(c=='S'||c=='s')
                {
                    outtextxy(getmaxx()-160,getmaxy()-30,"Switching ....");
                    if(flag==0)
                     {
                         cleardevice();
                         analogclock();
                         flag=1;
                     }
                    else
                        flag=0;
                }
                else if(c==27)
                    break;
            }
            if(flag==0)
            {
                cleardevice();
                digitalclock();
            }
            else{
                cleardevice();
                analogclock();
                drawHands(200);
            }
            setcolor(WHITE);
            settextstyle(10,HORIZ_DIR,1);
            outtextxy(8,getmaxy()-50,"Esc -> Exit");
            if(flag==0)
                outtextxy(8,getmaxy()-30,"S   -> Switch to Analog Clock");
            else
                outtextxy(8,getmaxy()-30,"S   -> Switch to Digital Clock");
            Sleep(500);
        }
        closegraph();
        return 0;
}
