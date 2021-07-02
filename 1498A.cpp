#include <iostream>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
	
}
ll digits(ll n)
{
	return n == 0 ? 0 : n % 10 + digits(n / 10);
}

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		for(ll i=n; i<=(n<<1); i++)
		{
			ll k = digits(i);
			if(gcd(i, k) > 1)
			{
				cout << i << "\n";
				break;
			}
		}
	}
}

