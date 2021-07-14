#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, a, b;
		cin >> n >> a >> b;
		cout << (n/2)*min(2*a, b) + (n%2)*a << "\n";
	}
}
