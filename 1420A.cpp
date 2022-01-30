#include <bits/stdc++.h>
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
		vector <ll> a(n);
		for(ll i=0; i<n; i++)
			cin >> a[i];
		bool flag = false;
		for(ll i=1; i<n; i++)
		{
			if(a[i] >= a[i-1])
			{
				flag = true;
				break;
			}
		}
		if(!flag)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
