#include<bits/stdc++.h>
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
		vector <int> v(n);
		for(int i=0; i<n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		if(v.front() == v.back())
			cout << n << "\n";
		else
			cout << 1 << "\n";
	}
}
