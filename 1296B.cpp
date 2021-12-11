#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int s;
		cin >> s;
		int res = 0;
		int p = pow(1000, 3);
		while(s > 0)
		{
			while(s < p)
				p /= 10;
			res += p;
			s -= (p - p/10);
		}
		cout << res << "\n";
	}
}
