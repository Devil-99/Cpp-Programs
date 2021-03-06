#include <bits/stdc++.h>
using namespace std;

/*Design a data structure that supports the following two operations:
void addNum(int num) - Add a integer number from the data stream to the data structure.
double findMedian() - Return the median of all elements so far.

Median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value. So the median is the mean of the two middle value.

For example,
[2,3,4], the median is 3

[2,3], the median is (2 + 3) / 2 = 2.5*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        float median;
        sort(a,a+n);
        if(n%2!=0)
            median=a[((n+1)/2)-1];
        if(n%2==0)
            median=float(a[(n/2)-1]+a[((n+1)/2)-1])/2;
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<endl<<median;
    }
    return 0;
}
