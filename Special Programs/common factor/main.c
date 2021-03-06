#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int i,j,a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n-1;j++)
   {
       int k;
       for(i=0;i<n-1-j;i++)
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
   }
   int count;
   for(i=2;i<a[n-1];i++)
   {count=0;
    for(j=0;j<n;j++)
    {
        if(a[j]%i!=0)
        count++;
    }
    if(count==0)
    {printf("%d",i);
    break;}
   }
   if(count!=0)
    printf("1");
	return 0;
}
