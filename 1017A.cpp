#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	vector <int> v;
	for(int i=0; i<n; i++)
	{
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll sum = 0;
		sum = a+b+c+d;
		v.push_back(sum);
	}
	ll t = v[0];
	sort(v.begin(), v.end(), greater<int>());
	for(int i=0; i<v.size(); i++)
	{
		if(v[i] == t)
		{
			cout << i+1;
			return 0;
		}
	}
}
