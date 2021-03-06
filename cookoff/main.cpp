#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;A:\Devil 2k19\max\main.cpp
  while(t--)
  {
      int n,b,m,max=0;
      cin>>n>>b;
      int w[n],h[n],p[n],a[n];
      for(int i=0;i<n;i++)
       {
        cin>>w[i]>>h[i]>>p[i];
      a[i]=w[i]*h[i];
      if(a[i]>max)
      {max=a[i];
    m=i;}

cout<<m<<endl;
      if(p[m]<b)
            cout<<max<<endl;
    else
        cout<<"no tablet"<<endl;
  }}
    return 0;
}
