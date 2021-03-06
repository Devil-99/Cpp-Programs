#include <stdio.h>
#include <stdlib.h>

#define scnf(d,a) scanf("%d",&a)
#define prnf(d,a) printf("%d",a)
int main()
{
    int i,val;
   char s[15];
   gets(s);
   for(i=0;i<15;i++)
       if(s[i]>=97&&s[i]<=122){
       val=s[i];
       val=val-32;
       s[i]=val;
   }
   puts(s);
    return 0;
}
