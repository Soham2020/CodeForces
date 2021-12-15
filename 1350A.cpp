#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		if(n%2 == 0)
		{
			cout << (n+2*k) << "\n";	
			continue;
		}
		ll s = 0;
		for(ll i=n; i>=2; i--)
		{
			if(n%i == 0)
				s = i;
		}
		cout << (n + s + 2*(k-1)) << "\n";
	}
}
