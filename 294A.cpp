#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	ll x, y, m;
	cin >> m;
	for(int i=1; i<=m; i++)
	{
		cin >> x >> y;
		a[x-1] += (y-1);
		a[x+1] += a[x] - y;
		a[x] = 0;
	}
	for(int i=1; i<=n; i++)
		cout << a[i] << "\n";
}
