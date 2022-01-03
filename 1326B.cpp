#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	vector <ll> b(n+1);
	for(ll i=1; i<=n; i++)
		cin >> b[i];
	vector <ll> x(n+1);
	x[1] = 0;
	for(ll i=2; i<=n; i++)
		x[i] = max(x[i-1], x[i-1] + b[i-1]);
	vector <ll> a(n+1);
	for(ll i=1; i<=n; i++)
		a[i] = x[i] + b[i];
	for(ll i=1; i<=n; i++)
		cout << a[i] << " ";
}
