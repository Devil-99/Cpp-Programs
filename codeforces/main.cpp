#include <iostream>

using namespace std;

int main()
{
    int n,v;
    cin>>n>>v;
    int sum=v;
    for(int i=1;i<n;i++)
    {
     if(n-i<=v)
            break;
        sum=sum+i+1;
    }
    cout << sum << endl;
    return 0;
}
