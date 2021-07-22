#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, k, m;
	cin >> n >> m >> k;
	ll a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	ll c, x;
	for(int i=1; i<=n; i++)
	{
		if(a[i] != 0)
		{
			if(a[i] <= k)
			{
				c = min(c, abs(i-m));	
			}
		}
	}
	cout << c*10;
}
