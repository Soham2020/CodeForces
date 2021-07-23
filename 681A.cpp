#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, flag = 0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		string s;
		cin >> s;
		ll b, a;
		cin >> b >> a;
		if(b >= 2400)
		{
			if(a > b)
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag)
		cout << "YES";
	else
		cout << "NO";
}
