#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
	{
		if(a[i]&1)
			cout << a[i] << " ";
		else
			cout << a[i] - 1 << " ";
	}
}
