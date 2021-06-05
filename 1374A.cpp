#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, x, y, k1, k2;
		cin>>x>>y>>n;
		k1 = n-n%x+y;
		k2 = n-n%x+y-x;
		if(k1>=0 && k1<=n)
			cout<<k1<<"\n";
		else
			cout<<k2<<"\n";
	}
}
