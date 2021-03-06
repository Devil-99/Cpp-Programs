#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[10]={73,32,76,111,118,101,32,89,111,117};
    int d[13]={77,121,32,83,119,101,101,116,104,101,97,114,116};
    int i;
    for(i=0;i<10;i++)                 //Decode it
    printf("%c",c[i]);
    printf("\n");
    for(i=0;i<13;i++)
    printf("%c",d[i]);
    printf("%c%c",32,3);

    return 0;
}
