#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		
		ll res = (a+b+c) >> 1 ;
		cout << res << "\n";
	}
}
