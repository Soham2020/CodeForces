#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, x;
	cin >> n >> x;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	double s = 0;
	for(int i=0; i<n; i++)
	{
		if(abs(a[i]) <= x)
			s += a[i];
	}
	if(s == 0)
		cout << 0;
	else if(abs(s) <= x)
		cout << 1;
	else
	{
		double div = abs(s)/x;
		cout << ceil(div);
	}
}
