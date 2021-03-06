#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
   scanf("%d%d",&a,&b);
   sum=fun(a,b);
   printf("%d",sum);
    return 0;
}
int fun(int a,int b)
{
    return (a+b);
}
