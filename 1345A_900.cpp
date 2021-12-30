#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a, b, c, d; 
		cin >> a >> b >> c >> d;
	 
		if (a <= b)
			cout << b << "\n";
	 
		else if (d >= c)
			cout << -1 << "\n";
	 
		else
		{
			ll ans = b;
			ll more = a - b;
			ll one = c - d;
			more = ((a - b + one - 1) / one) * c;
	 
			ans += more;
	 
			cout << ans << "\n";
		}
	}
}
