#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll solve(ll n, ll k, ll t)
{
	if(t <= k)
		return t;
	else if(k <= t && t <= n)
		return k;
	else if(n <= t && t <= (n+k))
		return (n+k-t);
}

int main()
{
	ll n, k, t;
	cin >> n >> k >> t;
	cout << solve(n, k, t);
}
