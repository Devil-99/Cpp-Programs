#include <iostream>

using namespace std;

int main()
{
   int i,j,n,key;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
    cin>>a[i];
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && key<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
