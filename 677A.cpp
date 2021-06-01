#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, h, val, w=0;
	cin>>n>>h;
	ll a[n];
	for(ll i=0; i<n; i++)
		cin>>a[i];
	for(ll i=0; i<n; i++)
	{
		if(a[i] > h)
			w = w + 2;
		else
			w++;
	}
	cout<<w;
}
