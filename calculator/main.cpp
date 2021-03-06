#include <iostream>
using namespace std;
int main()
{
    int n,i;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int a,b;
    float ans=0;
    cin>>a>>b;
    char sign;
    cin>>sign;
    switch(sign)
    {
        case '+':
        ans+=a+b;
        case '-':
        ans-=a-b;
        case '*':
        ans*=a*b;
        case '/':
        ans/=a/b;
    }
    switch(sign)
    {
        case

    }
    return 0;
}
