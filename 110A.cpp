#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c=0, v=0;
	cin>>n;
	while(n>0)
	{
		ll d = n % 10;
		if(d == 4 || d == 7)
			c++;
		n = n/10;
	}
	while(c > 0)
	{
		ll d = c%10;
		if(d == 4 || d == 7)
			v++;
		c = c / 10;
	}
	if(v >= 1)
		cout<<"YES";
	else
		cout<<"NO";
}
