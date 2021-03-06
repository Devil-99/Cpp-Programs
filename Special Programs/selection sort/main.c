#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,temp,min,j,loc;
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    { min=a[i];
      loc=i;
      for(j=i+1;j<=n-1;j++)
     {
        if(min>a[j])
           {
              min=a[j];
              loc=j;
           }
        temp=a[i];
        a[i]=loc;
        a[loc]=temp;
     }
    }
    for(i=0;i<=n-1;i++)
    printf("%d\n",a[i]);
    return 0;
}
