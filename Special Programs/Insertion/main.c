#include <stdio.h>
#include <stdlib.h>
#define scn(d,n) scanf("%d",&n)
#define prn(d,n) printf("%d",n)


/*void insert(int a[],int n,int size,int pos,int val)
{
    int i;
    if(pos-1>n)
        {printf("Invalid\n");
        return ;}
    if(n==size)
    {
        printf("Invalid\n");
        return ;
    }
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=val;
    n++;
    return ;
}*/

int main()
{
   int n,i,size
   scn(d,size);
   int list[size];
   for(i=0;i<n-1;i++)
    scn(d,list[i]);
    n=sizeof(list)/sizeof(int);
    prn(d,n);
   /*int pos,val;
   scn(d,pos);
   scn(d,val);

   insert(list,n,pos,val);*/

   for(i=0;i<n;i++)
    prn(d,list[i]);
    return 0;
}
