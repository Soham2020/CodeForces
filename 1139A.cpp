#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll c = 0;
	for(int i=0; i<n; i++)
	{
		ll x = s[i] - '0';
		if(x%2 == 0)
			c += (i+1);
	}
	cout << c;
}
