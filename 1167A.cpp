#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--){
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll x = n;
	for(int i=0; i<n; i++)
	{
		if(s[i] == '8')
		{
			x = i;
			break;
		}
	}
	if((n-x) >= 11)
		cout << "YES\n";
	else
		cout << "NO\n";
	}
}
