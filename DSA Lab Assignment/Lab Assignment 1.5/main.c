#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[200],x;
    gets(s);
    int i=0,c=0;
    while(s[i]!='\0')
    {c++;
    i++;}
    printf("%d\n",c);
    int start=0,end=c-1;
    while(start<end)
    {
        x=s[start];
        s[start]=s[end];
        s[end]=x;
        start++;
        end--;
    }
    for(i=0;i<=c-1;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
