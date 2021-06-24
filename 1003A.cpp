#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	vector<ll> cnt(101);
	for (int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		++cnt[x];
	}
	
	cout << *max_element(cnt.begin(), cnt.end()) << "\n";
}
