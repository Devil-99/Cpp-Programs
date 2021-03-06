#include <stdio.h>
#include <stdlib.h>

int main()
{
    auto int a[5];
    for(int i=0;i<5;i++)
    printf("this is the garbage value of auto:-%d\n",a[i]);

    static int b[5];
    for(int i=0;i<5;i++)
    printf("this is the garbage value of static:-%d\n",b[i]);
}

