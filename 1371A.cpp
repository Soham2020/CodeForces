#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n%2 == 0)
			cout<<(n/2)<<"\n";
		else
			cout<<(n/2+1)<<"\n";
	}
}
