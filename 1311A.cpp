#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a, b;
		cin>>a>>b;
		if(a == b)
			cout<<0<<"\n";
		else
			cout<<(1 + int((a < b) ^ ((b - a) & 1)))<<"\n";
	}
}
