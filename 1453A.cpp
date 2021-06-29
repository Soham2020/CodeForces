#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;
		ll b[n], l[m];
		for(int i=1; i<=n; i++)
			cin >> b[i];
		for(int i=1; i<=m; i++)
			cin >> l[i];
		ll c = 0;
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				if(b[i] == l[j])
				{
					c++;
					break;
				}
			}
		}
		cout << c << "\n";
	}
}
