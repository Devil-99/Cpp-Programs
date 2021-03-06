#include <stdio.h>
#include <stdlib.h>

int fun(int n,int a[n],int prod,int i)
{
    if(i==n)
    {printf("%d",prod);
    return 0;}
    fun(n,a[n],prod*a[i],i+1);
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],prod=1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        fun(n,a[n],prod,0);

    return 0;
}
