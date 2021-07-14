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
		string s;
		cin >> s;
		n = s.size();
		if(s[n-1] == 'o')
			cout << "FILIPINO\n";
		else if(s[n-1] == 'u')
			cout << "JAPANESE\n";
		else if(s[n-1] == 'a')
			cout << "KOREAN\n";
	}
}
