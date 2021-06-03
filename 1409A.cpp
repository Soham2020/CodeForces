#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a, b;
		cin>>a>>b;
		ll d = abs(a - b);
		cout<<d/10+(d%10!=0)<<"\n";
	}
}
