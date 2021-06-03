#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c=0;
	cin>>n;
	ll a[n];
	for(ll i=1; i<=n; i++)
		cin>>a[i];
	
	ll min = a[1];
	ll max = a[1];
	
	for(ll i=1; i<=n; i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			c++;
		}
		if(a[i]>max)
		{
			max = a[i];
			c++;
		}
	}
	cout<<c;
}
