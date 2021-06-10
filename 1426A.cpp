#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, x;
		cin>>n>>x;
		
		if(n <= 2)
			cout<<1<<"\n";
		else
			cout<<floor(((n-3) / x) + 2)<<"\n";
	}
}
