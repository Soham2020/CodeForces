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
		cin >> n;
		string s;
		cin >> s;
		ll c = 0;
		for(int i=n-1; i>=0; i--)
		{
			if(s[i] == ')')
				c+=1;
			else
				break;
		}
		if((n-c) >= c)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
}
