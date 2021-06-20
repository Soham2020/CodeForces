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
		ll r[n];
		for(int i=1; i<=n; i++)
			cin >> r[i];
		ll up = 0, down = 0;
		for(int i=1; i<=n; i++)
		{
			if((r[i]&1) != 0)
				up++;
		}
		cout << up << "\n";
	}
}
