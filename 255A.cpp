#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	vector <int> v;
	ll s;
	for(int i=1; i<=3; i++)
	{
		s = 0;
		for(int j=i; j<=n; j+=3)
			s += a[j];
		v.push_back(s);
	}
	if(v[0] == *max_element(v.begin(), v.end()))
		cout << "chest";
	else if(v[1] == *max_element(v.begin(), v.end()))
		cout << "biceps";
	else
		cout << "back";
}
