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
		
		if((n == 1 || m == 1) || (n == 2 && m == 2))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
