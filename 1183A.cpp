#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a;
	cin >> a;
	ll i = a;
	while(i >= a)
	{
		ll x = i, sum = 0;
		while(x > 0)
		{
			ll d = x % 10;
			sum += d;
			x /= 10;
		}
		if(sum % 4 == 0)
		{
			cout << i;
			break;
		}
		else
			i++;
	}
}
