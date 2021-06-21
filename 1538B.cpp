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
		ll a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		
		ll sum = accumulate(a, a+n, 0);
		
		ll div = sum / n;
		ll c = 0;
		if(sum%n == 0)
		{
			for(int i=0; i<n; i++)
			{
				if(a[i] > div)
					c++;
			}
			cout << c << "\n";
		}
		else
			cout << -1 << "\n";
	}
}
