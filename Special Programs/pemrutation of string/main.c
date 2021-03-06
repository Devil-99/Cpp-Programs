#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *s,int l,int r)
{
    int i;
    if(l>r)
        printf("%s ",s);
    else
    {
        for(i=l;i<=r;i++)
        {swap(s+l,s+i);
        permute(s,l+1,r);
        swap(s+l,s+i);}
    }
}
int main()
{
   char s[10];
   gets(s);
   int n=strlen(s);
   permute(s,0,n-1);
    return 0;
}
