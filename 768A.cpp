#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	vector <ll> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	ll mx = *max_element(v.begin(), v.end());
	ll mn = *min_element(v.begin(), v.end());
	ll c1 = 0, c2 = 0;
	for(int i=0; i<n; i++)
	{
		if(v[i] == mx)
			c1++;
		if(v[i] == mn)
			c2++;
	}
	if(mx == mn)
		cout << 0;
	else
		cout << abs(n-c1-c2);
}
