#include <stdio.h>
#include <stdlib.h>
#define scn(d,n) scanf("%d",&n)
#define prn(d,n) printf("%d",n)
#define for(i,n,pp) for(i=0;i<n;i++)
int main()
{
   int n,i,j;
   scn(d,n);
   int a[n];
   for(i,n,pp)
    scn(d,a[i]);
   for(j,n-1,pp)
   {int k;
       for(i,n-1-j,pp)
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
   }
   for(i,n,pp)
    prn(d,a[i]);
    return 0;
}
