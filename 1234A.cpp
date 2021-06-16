#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
			
		sort(a, a+n);
		
		ll sum = 0;
		for(int i=0; i<n; i++)
			sum += a[i];
			
		cout << (sum + n - 1) / n << "\n";
	}
}
