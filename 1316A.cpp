#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;
		ll a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		ll sum = 0;
		for(int i=0; i<n; i++)
			sum+=a[i];
		cout << min(m, sum) << "\n";
	}
}
