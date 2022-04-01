#include <bits/stdc++.h>
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
        ll num = 1;
        ll sum2 = 0;
        ll sum = n * (n + 1) / 2;
        while (num <= n)
		{
            sum2 += num;
            num *= 2;
        }
        cout << sum - sum2 * 2 << endl;
	}	
}
