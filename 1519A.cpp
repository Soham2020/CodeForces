#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll r, b, d;
		cin >> r >> b >> d;
		
		if(min(r, b) * (d + 1) >= max(r, b))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
