#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int n, m, r;
	cin >> n >> m >> r;
	ll s[n], b[m];
	for(int i=0; i<n; i++)
		cin >> s[i];
	for(int i=0; i<m; i++)
		cin >> b[i];
	ll mi = *min_element(s, s+n);
	ll ma = *max_element(b, b+m);
	ll x = r / mi;
	ll y = r % mi;
	ll res = ma * x + y;
	if(res < r)
		cout << r;
	else
		cout << res;
}
