#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll s, a, b, c;
		cin >> s >> a >> b >> c;
		ll x = s/c;
		ll t = x/a;
		ll z = t*b;
		ll sum = z + x;
		cout << sum << "\n";
	}
}
