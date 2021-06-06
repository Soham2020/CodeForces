#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m1=0, c1=0;
	cin>>n;
	while(n--)
	{
		ll m, c;
		cin>>m>>c;
		if(m>c)
			m1++;
		else if(c>m)
			c1++;
		else
			continue;
	}
	if(m1>c1)
		cout<<"Mishka";
	else if(c1>m1)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
}
