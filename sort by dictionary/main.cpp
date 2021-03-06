#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    string c[n];
    int l[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        l[i]=c[i].length();
    }
// ----------------------------
  for(int x=0;x<l[i];x++)
   for(int j=0;j<=n-1,j++)
   {int k;
       for(int i=0;i<=n-1-j;i++)
        {
        if(a[i][x]>a[i+1][x])
          {
            k=c[i][x];
            c[i][x]=a[i+1][x];
            c[i+1][x]=k;
          }
        if(a[i])
        }
   }
//-------------------------------
    return 0;
}
