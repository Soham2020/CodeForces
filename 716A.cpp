#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c;
	cin >> n >> c;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	ll k = 0;
	for(int i=0; i<n; i++)
	{
		if(i == 0)
		{
			if(a[i] <= c)
				k++;
			else
				k = 1;
		}
		else
		{
			ll dif = abs(a[i] - a[i-1]);
			if(dif <= c)
				k++;
			else
				k = 1;
		}
	}
	cout << k;
}
