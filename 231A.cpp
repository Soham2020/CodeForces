#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, x=0;
	cin>>n;
	while(n--)
	{
		vector <ll> v (3);
		ll val;
		for(int i=0; i<3; i++)
		{
			cin>>val;
			v.push_back(val);
		}
		ll c = count(v.begin(), v.end(), 1);
		if(c>=2)
			x++;
	}
	cout<<x<<"\n";
}
