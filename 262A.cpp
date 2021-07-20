#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, k, c = 0;
	cin >> n >> k;
	string s;
	for(int i=0; i<n; i++)
	{
		ll t = 0;
		cin >> s;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i] == '4' || s[i] == '7')
				t++;
		}
		if(t <= k)
			c++;
	}
	cout << c;
}
