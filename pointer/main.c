#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{int l=0;
    char *a;
    while(*a!='\0')
       {
        scanf("%c",a);
        a++;
        l++;}
    while(l--)
       {
        printf("%c",*a);
        a++;}
    return 0;
}
