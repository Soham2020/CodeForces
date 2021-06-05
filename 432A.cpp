#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=1; i<=n; i++)
		cin>>a[i];
		
		
//	for(int i=1; i<=n; i++)
//		cout<<a[i]<<" ";
	
	int c=0;
	for(int i=1; i<=n; i++)
	{
		if(5 - a[i] >= k)
			c++;
	}
	cout<<c/3;
}
