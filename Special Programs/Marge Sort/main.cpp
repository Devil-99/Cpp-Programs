#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],s[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     int x=n/2;
     int l[x+1],r[x+1];
     for(int i=0;i<x;i++)
     l[i]=a[i];
     for(int i=0;i<x;i++)
     r[i]=a[i+x];
     l[x]=10000;
     r[x]=10000;

     int p=1,q=1;
     for(int j=0;j<n;j++)
     {
         if(l[p]<=r[q])
         {
             s[j]=l[p];
             p++;
         }
         else
         {
             s[j]=r[q];
             q++;
         }
    for(int k=0;k<n;k++)
        cout<<s[k]<<" ";
     }
    return 0;
}
