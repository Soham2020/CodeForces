#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		ll sum = 0, c = 0;
		for(int i=0; i<n; i++)
		{
			if(a[i] == 0)
			{
				c++;
				sum+=1;
			}
			else
				sum += a[i];	
		}
		if(sum == 0)
			c++;
		cout << c << "\n";
	}
}
