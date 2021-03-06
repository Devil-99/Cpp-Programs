#include <iostream>

using namespace std;

int main()
{int t;
cin>>t;
while(t--){
int n,max,no=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
       cin>>a[i];
for(int i=0;i<n;i++)
{
    max=a[i];
    if(a[i]<=max)
    {
      no=no+1;
      max=a[i+1];
    }
        else
        break;
}
   cout << no << endl; }
    return 0;
}
