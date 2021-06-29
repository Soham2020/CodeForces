#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll p, a, b, c;
		cin >> p >> a >> b >> c;
		ll x, y, z;
		x = a-p%a;
		y = b-p%b;
		z = c-p%c;
		if((p%a == 0) || (p%b == 0) || (p%c == 0))
			cout << 0 << "\n";
		else
			cout << min(x, min(y, z)) << "\n";
	}
}
