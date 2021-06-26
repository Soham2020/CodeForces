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
		if((n & 1) == 0)
		{
			if(n == 2)
				cout << 2 << "\n";
			else
				cout << 0 << "\n";
		}
		else
			cout << 1 << "\n";
	}
}
