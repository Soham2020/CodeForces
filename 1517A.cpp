#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll s = n / 2050;
		ll res = 0;
		while(s > 0)
		{
			res += (s%10);
			s /= 10;
		}
		if(n%2050 == 0)
			cout << res << "\n";
		else
			cout << -1 << "\n";
	}
}
