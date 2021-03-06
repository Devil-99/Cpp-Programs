#include <iostream>
#include <string.h>
using namespace std;

void palindrome(string s)
{
   int l,h;
   l=0;
   h=s.length()-1;
   while(l<h)
   {
       if(s[l++]!=s[h--])
        cout<<"NO"<<"\n";
        return ;
   }
   cout<<"YES"<<"\n";
}
int main()
{
    string s;
    cin>>s;
    palindrome(s);
    return 0;
}
