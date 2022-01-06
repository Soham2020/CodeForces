#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll solve(ll n)
{
	return (max(6LL, n+1)/2 * 5);
}

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << solve(n) << "\n";
	}
}
