#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a, b, c, t = 0;
	cin >> a >> b >> c;
	ll n;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		ll x;
		cin >> x;
		if((x > b) && (x < c))
			t++;
	}
	cout << t;
	
}
