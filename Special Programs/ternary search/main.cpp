/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    int l=0,r=n-1,mid1,mid2;
    while(l<=r)
    {
        mid1=l+(r-l)/2;
        mid2=mid1+(r-l)/2;

        if(x==a[mid1])
        {cout<<mid1+1;
        break;}
        else if(x==a[mid2])
        {cout<<mid2+1;
        break;}
        else if(x<a[mid1])
        r=mid1-1;
        else if(x>a[mid2])
        l=mid2+1;
        else
        {l=mid1;
        r=mid2;}
    }
    return 0;
}
