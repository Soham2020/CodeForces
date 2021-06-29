#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll l, r;
	cin >> l >> r;
	for(int i=l; i<=r; i++)
	{
		ll m = i;
		set <int> s;
		ll c = 0;
		while(m > 0)
		{
			s.insert(m%10);
			m/=10;
			c++;
		}
		if(s.size() == c)
		{
			cout << i;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}
