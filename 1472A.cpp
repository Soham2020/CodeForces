#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll w, h, n, c=1;
		cin>>w>>h>>n;
		
		if(n == 1)
			cout<<"YES\n";
		else
		{
			while(w%2 == 0)
			{
				c *= 2;
				w/=2;
			}
			while(h%2 == 0)
			{
				c *= 2;
				h/=2;
			}
			if(c >= n)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
}
