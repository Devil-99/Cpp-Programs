#include <stdio.h>
#include <stdlib.h>
int bsrch(int a[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
            return (mid);
        if(a[mid]>x)
            return (bsrch(a,l,mid-1,x));
        else
            return (bsrch(a,mid+1,r,x));
    }
    return -1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int l=0,r=n-1;
    int x;
    scanf("%d",&x);
    int ans=bsrch(a,l,r,x);
    (ans==-1)?printf("the no is not here\n"):printf("%d",ans);

    return 0;
}
