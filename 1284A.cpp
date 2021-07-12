#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m;
	cin >> n >> m;
	string s[22], t[22];
	for(int i=0; i<n; i++)
		cin >> s[i];
	for(int i=0; i<m; i++)
		cin >> t[i];
	ll q;
	cin >> q;
	while(q--)
	{
		ll x;
		cin >> x;
		x--;
		cout << s[x%n] + t[x%m] << "\n";
	}
}
