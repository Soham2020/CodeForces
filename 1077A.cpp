#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a, b, k;
		cin >> a >> b >> k;
		
		ll o, e;
		if((k & 1) == 0)
		{
			o = k >> 1;
			cout << ((a-b)*o) << "\n";
		}
		else
		{
			o = (k >> 1);
			cout << ((a-b)*o) + a << "\n";
		}
	}
	
}
