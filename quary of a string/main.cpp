#include <iostream>

using namespace std;

int main()
{
    string *s1,*s2;
    cin>>*s1>>*s2;

    if(*s1>*s2)
        cout<<"1"<<endl;
    else if(*s1<*s2)
        cout<<"-1"<<endl;
    else
       {s1++;
        s2++;}
    cout<<"same"<<endl;
    return 0;
}
