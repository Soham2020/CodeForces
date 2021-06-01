#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c=0;
	cin>>n;
	while(n--)
	{
		ll p, q;
		cin>>p>>q;
		ll sub = abs(p - q);
		if(sub >= 2)
			c = c + 1;
	}
	if(c > 0)
		cout<<c;
	else
		cout<<0;
}
