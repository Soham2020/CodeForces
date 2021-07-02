#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, x, a, b;
		cin >> n >> x >> a >> b;
		if(abs(a-b)+x >= n)
			cout << n-1 << "\n";
		else
			cout << abs(a-b)+x << "\n";
	}
}
