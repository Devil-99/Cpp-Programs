#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int m,l,r,k;
   cin>>m;
   while(m--)
    {
        cin>>l>>r>>k;
        while(k--)
   {for(int i=r-2;i>=l-1;i--)
    {
       s[i+1]=s[i];
    }
    s[l]=s[r];}
    cout<<s<<endl;
   }
    return 0;
}
