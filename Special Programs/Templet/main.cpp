#include <iostream>
using namespace std;

template <typename T>
T Max(T x,T y)
{
    return (x>y)?x:y ;
}

template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
              swap(a[j], a[j - 1]);
}

int main()
{
    //template Max
    cout << Max <int> (3,7) << endl;
    cout<< Max <char> ('g','e')<<endl;

    //template bubbleSort
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, 5);
    for (int i=0;i<n;i++)
        cout <<a[i]<<" ";
    cout << endl;

     //template
    return 0;
}
