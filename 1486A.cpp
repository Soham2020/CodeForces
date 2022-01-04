#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

string solve()
{
	ll n, x = 0, sum = 0;
	cin >> n;
	ll arr[n];
	for(ll i=0; i<n; i++)
		cin >> arr[i];
	for(ll i=0; i<n; i++)
	{
		x += i;
		sum += arr[i];
		if(sum < x)
		{
			return "NO";
		}
	}
	return "YES";
}

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		cout << solve() << "\n";
	}
}
