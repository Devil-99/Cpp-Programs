#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    int i;
    printf("Enter a string:");
    gets(s);  //s==&s[0]
    for(i=0;s[i]!='\0';i++);
    printf("length of the string is %d",i);
    return 0;
}
