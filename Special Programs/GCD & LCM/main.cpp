#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {long int a,b,max,min,gcd,lcm;
    cin>>a>>b;
    if(a>b)
    { max=a;
    min=b;}
    else
    {max=b;
    min=a;}

    if(max%min==0)
    {gcd=min;
    lcm=max;}
    else
    {
        for(int i=min-1;i>0;i--)
        if(max%i==0 && min%i==0)
        {
            gcd=i;
            break;
        }
        lcm=(a*b)/gcd;
    }
    cout<<gcd<<" "<<lcm<<"\n";
    }return 0;
}
