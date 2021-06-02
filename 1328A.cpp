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
		if(a>b)
		{
			if(a%b!=0)
				cout<<(b - (a%b))<<"\n";
			else
				cout<<0<<"\n";
		}
		else
			cout<<abs(a-b)<<"\n";
	}
}
