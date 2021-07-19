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
	ll flag = 0;
	sort(a, a+n, greater<int>());
	for(int i=0; i<n; i++)
	{
		if(a[i] < i)
		{
			flag = 1;
			cout << (i-1) << "\n";
			break;
		}
	}
	if(!flag)
		cout << n << "\n";
}
