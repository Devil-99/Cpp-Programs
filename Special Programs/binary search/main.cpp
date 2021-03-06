#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;
    cin>>x;
    int l=0,r=n-1,mid;
    sort(a,a+n);
    while(l<r)
    {
        mid=l+(r-l)/2;
        if(x==a[mid])
            {cout<<mid+1<<"\n";
            break;}
        else if(x<a[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return 0;
}
