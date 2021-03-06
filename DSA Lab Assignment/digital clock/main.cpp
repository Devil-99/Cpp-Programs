#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    while(1)
    {time_t t; //= time(NULL);
    time(&t);
    struct tm *tm = localtime(&t);
    //printf("%s",asctime(tm));

    char MY_TIME[50];
    char MY_DATE[50];
    strftime(MY_TIME, sizeof(MY_TIME), "%I:%M:%S %p", tm);
    strftime(MY_DATE, sizeof(MY_DATE), "%a %d %b, %Y", tm);
    settextstyle(7, 0, 7);
    setcolor(3);
    int midx = getmaxx()/2;
    int midy = getmaxy()/2;
    outtextxy(midx-275,midy,MY_TIME);
    settextstyle(7, HORIZ_DIR, 5);
    outtextxy(midx-220,midy-100,MY_DATE);
    delay(1000);
    cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
    //outtextxy(400,400,asctime(ptr));
