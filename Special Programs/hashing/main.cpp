#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[10];
	for(int i=0;i<10;i++)
	cin>>a[i];
	int b[10]={0};
	for(int i=0;i<10;i++)
	b[a[i]]++;
	for(int i=0;i<10;i++)
	cout<<b[i];
}
