#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, c = 0;
		cin >> n;
		
		for(ll i=1;i<=9;i++)
		{
	        ll x=0;
	        for(ll j=1;j<=10;j++)
			{
	            x=x*10+i;
	            if(x<=n) c++;
	        }
    	}
		cout << c << "\n";
	}
}
