#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, k;
		cin >> n >> k;
		for(int i=0; i<n; i++)
			cout << char('a' + i%k);
		cout << "\n";		
	}
}
