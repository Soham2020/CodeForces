#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
	if(a == 0)
		return b;
	else
		return gcd(b%a, a);
}

int main()
{
	ll a, b, n;
	cin >> a >> b >> n;
	
	ll c = 0;
	while(n > 0)
	{
		c += 1;
		
		if((c & 1) != 0)
		{
			ll d = gcd(a, n);
			n = n - d;
		}
		else
		{
			ll d = gcd(b, n);
			n = n - d;
		}
	}
	
	if(c&1 != 0)
		cout << 0;
	else
		cout << 1;
}
