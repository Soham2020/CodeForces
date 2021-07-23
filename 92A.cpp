#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m;
	cin >> n >> m;
	ll x = m%(n*(n+1)/2);
	for(int i=1; i<=n; i++)
	{
		if(x >= i)
			x -= i;
		else
		{
			cout << x;
			return 0;
		}
	}
}
