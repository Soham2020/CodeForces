#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll x, y;
		cin >> x >> y;
		ll dif = abs(x - y);
		if(dif < 2)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
