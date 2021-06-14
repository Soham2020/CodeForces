#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m, x;
		cin >> n >> m >> x;
		
		x -= 1;
		
		ll r = x % n;
		ll c = x / n;
		
		cout << r*m+c+1 << "\n";
	}
}
