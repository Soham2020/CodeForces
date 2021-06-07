#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x, c=0, sum, last, b;
		cin>>x;
		ll X = x;
		while(X>0)
		{
			ll a = X%10;
			c++;
			X/=10;
		}
		
		
		{
			last = x % 10;
			b = (last * 10) - 10;
			if(c==1)
				sum=1;
			else if(c==2)	
				sum=3;
			else if(c==3)
				sum=6;
			else if(c==4)
				sum=10;
			
			cout<<(sum + b)<<"\n";
		}
	}
}
