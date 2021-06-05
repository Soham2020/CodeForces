#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[4];
	for(int i=0; i<3; i++)
		cin>>a[i];
	
	sort(a, a+3);
	
	int d1 = abs(a[0] - a[1]);
	int d2 = abs(a[1] - a[2]);
	
	cout<<d1+d2;
}
