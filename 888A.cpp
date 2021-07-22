#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	ll c = 0;
	if(n > 2)
	{
		for(int i=2; i<=n-1; i++)
		{
			if(((a[i] < a[i-1]) && (a[i] < a[i+1])) || ((a[i] > a[i-1]) && (a[i] > a[i+1])))
				c++;
		}
		cout << c;
	}
	else
		cout << 0;
}
