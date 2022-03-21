#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, b, d;
	cin >> n >> b >> d;
	ll total = 0, c = 0;
	for(ll i=0; i<n; i++)
	{
		ll x;
		cin >> x;
		if(x > b)
			continue;
		total += x;
		if(total > d)
		{
			total = 0;
			c++;
		}
	}
	cout << c << "\n";
}
