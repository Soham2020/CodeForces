#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	string s;
	cin >> s;
	ll n = s.length();
	ll x = count(s.begin(), s.end(), 'a');
	if(x <= (n/2))
	{
		while(x <= (n/2))
			n -= 1;
	}
	cout << n;
}
