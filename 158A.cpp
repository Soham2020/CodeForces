#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, k, val, c=0;
	cin>>n>>k;
	ll a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		if(a[i] >= a[k-1]&&a[i] > 0)
			c++;
	}
	cout<<c<<"\n";
}
