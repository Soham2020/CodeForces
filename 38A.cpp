#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll d[n-1];
	for(int i=1; i<=(n-1); i++)
		cin >> d[i];
	ll a, b, sum = 0;
	cin >> a >> b;
	for(int i=a; i<b; i++)
		sum += d[i];
	cout << sum;
}
