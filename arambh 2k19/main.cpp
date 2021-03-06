#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   long long int t,z;
    cin>>t;
    while(t--)
    {
        cin>>z;
       long long int n=sqrt(z),m,p=0;
        if(n>=3){
        for(int i=n;i>0;i--)
        {
            if(i%3==0)
            {
            m=((i*i)+3)/3;
            p=p+m;
            }
        }
            cout<<p<<" "<<p-1<<" "<<p-2<<" "<<endl;
        }
            else
            cout<<"0"<<" "<<"0"<<" "<<"0"<<" "<<endl;
    }
	return 0;
}
