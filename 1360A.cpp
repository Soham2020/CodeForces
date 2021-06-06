#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a, b, nxt;
		cin>>a>>b;
		nxt = min(max(2*b, a), max(2*a, b));
		cout<<nxt*nxt<<"\n";
	}
}
