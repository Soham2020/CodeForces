#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll l[n], r[n];
	for(int i=0; i<n; i++)
		cin >> l[i] >> r[i];
	ll l1 = count(l, l+n, 1);
	ll l0 = count(l, l+n, 0);
	ll r1 = count(r, r+n, 1);
	ll r0 = count(r, r+n, 0);
	ll m1 = min(l1, l0);
	ll m2 = min(r1, r0);
	cout << (m1+m2);
}
