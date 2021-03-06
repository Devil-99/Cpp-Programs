#include <iostream>

using namespace std;

int main()
{
    int n,x=0,y=1,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<x<<" ";
        k=x;
        x=y;
        y=x+k;
    }
    return 0;
}
