#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll x, y, a, b;
		cin >> x >> y >> a >> b;
		
		ll num = abs(x - y);
		ll den = (a + b);
		if((num % den) == 0)
			cout << (num / den) << "\n";
		else
			cout << -1 << "\n";
	}
}
