#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,mx;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            mx=a;
        else
            mx=c;
    }
    else
    {
        if(b>c)
            mx=b;
        else
            mx=c;
    }
    printf("%d",mx);
    return 0;
}
