#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	ll l1, l0;
	for(int i=n-1; i>=0; i--)
	{
		if(a[i] == 0)
		{
			l0 = i+1;
			break;
		}
	}
	for(int i=n-1; i>=0; i--)
	{
		if(a[i] == 1)
		{
			l1 = i+1;
			break;
		}
	}
	cout << min(l1, l0);
}
