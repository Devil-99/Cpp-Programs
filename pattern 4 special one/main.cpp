#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n; //the number should be odd one
    x=n/2;
    int i,j,c;
    for(i=0;i<n-x;i++)
      {c=1;
        for(j=0;j<n;j++)
        {
        if(j>=x-i && j<=x+i)
            {
                if(j<=x)
            cout<<c++;
            else
                cout<<--c-1;}
        else
            cout<<" ";
        }
    cout<<"\n";}
    return 0;
}
