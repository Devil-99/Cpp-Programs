#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
    return n*fact(n-1);
}

int main()
{
    int n,i,sum=0,y,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        y=pow(-1,i)*(pow(x,i)/fact(i));
        sum=sum+y;
        printf("%d",sum);
        printf("+");
    }
    return 0;
}
