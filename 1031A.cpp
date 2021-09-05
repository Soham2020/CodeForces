#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll w, h, k;
	cin >> w >> h >> k;
	ll i = 1, res = 0;
	while(k > 0)
	{
		ll w1 = w - 4 * (i - 1);
		ll h1 = h - 4 * (i - 1);
		ll l = w1 * 2;
		ll b = (h1 - 2) * 2;
		res += (l+b);
		i += 1;
		k -= 1;
	}
	cout << res;
}
