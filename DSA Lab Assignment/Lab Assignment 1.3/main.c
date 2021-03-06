#include <stdio.h>
#include <stdlib.h>

int search(int a[],int x,int len)
{
    int j;
    for(j=0;j<len;j++)
    if(a[j]==x)
        return j+1;
    return -1;
}
int main()
{
   int n;
   printf("Enter the length:");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int x,y;
    printf("Enter the number you have to find:");
    scanf("%d",&x);
        y=search(a,x,n);
    if(y == -1)
        printf("The number is not here");
    else
   printf("The position of the number is %d",y);
    return 0;
}

/*
a[n];
mid=n+1/2;
start=0,end=l-1;
search()
{
if(a[mid]=x)
    output<<mid
else

}
*/
