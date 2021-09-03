#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define pi pair <int, int>

int main()
{
	ll n;
	cin >> n;
	vector <ll> v;
	for(int i=0; i<n; i++)
	{
		ll val;
		cin >> val;
		v.pb(val);
	}
	vector <ll> res;
	for(int i=0; i<n-1; i++)
		res.pb(v[i] + v[i+1]);
	res.pb(v[n-1]);
	for(auto x:res)
		cout << x << " ";
}
