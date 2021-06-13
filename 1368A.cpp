#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a, b, n, c1=0, c2=0;
		cin >> a >> b >> n;
		
		while(a<=n && b<=n)
		{
			if(a > b)
			{
				b += a;
				c1++;
			}
			if(b > a)
			{
				a += b;
				c1++;
			}
		}
		cout << (c1-1) << "\n";
	}
}
