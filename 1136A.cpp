#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll l[n], r[n];
	ll x=0, k;
	for(int i=0; i<n; i++)
		cin >> l[i] >> r[i];
	cin >> k;
	for(int i=n-1; i>=0; i--)
	{
		if(l[i] <= k)
		{
			x = i;
			break;
		}
	}
	cout << (n-x);
}
