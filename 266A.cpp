#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=0, n;
	cin>>n;
	char c[n];
	for(int i=0; i<n; i++)
		cin>>c[i];
	for(int i=0; i<n; i++)
	{
		if(c[i] == c[i+1])
			x++;
	}
	cout<<x;
}
