#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	ll c = 0, f = n;
	for(int i=1; i<=n; i++)
	{
		if(a[i] <= k)
			c++;
		else
			break;
	}
	for(int i=n; i>=1; i--)
	{
		if(a[i] <= k)
			c++;
		else
			break;
	}
	cout << min(f, c);
}
