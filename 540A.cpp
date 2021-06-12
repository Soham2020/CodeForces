#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c = 0;
	cin >> n;
	string s1, s2;
	cin >> s1;
	cin >> s2;
	
	for(int i=0; i<n; i++)
	{
		ll d = abs(s1[i] - s2[i]);
		c = c + min(d, 10 - d);
	}
	
	cout << c;
} 
