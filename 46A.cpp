#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll c = 2;
	cout << c << " ";
	for(int i=2; i<n; i++)
	{
		c+=i;
		if(c > n)
			c-=n;
		cout << c << " ";
	}
}
