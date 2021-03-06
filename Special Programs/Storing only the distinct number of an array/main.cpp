#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n],k=0;
    b[n]=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int j=k;
        while(j>=0)
        {
            if(b[k]==a[i])
                count++;
            j--;
        }
        if(count==0)
            {b[k]=a[i];
             k++;}
    }
    for(int i=0;i<=k;i++)
        cout<<b[i];
    return 0;
}
