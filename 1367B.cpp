#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, i, e=0, o=0;
		cin>>n;
		ll a[n];
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]%2 != i%2)
			{
				if(i%2 == 0)
					e++;
				else
					o++;
			}
		}
		
		if(e!=o)
			cout<<-1<<"\n";
		else
			cout<<e<<"\n";
	}
}
