#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll c = 0;
	for(int i=0; i<(n/2); i++)
	{
		if(s[2*i] == s[2*i+1])
		{
			c++;
			if(s[2*i] == 'a')
				s[2*i] = 'b';
			else
				s[2*i] = 'a';
		}
	}
	cout << c << "\n";
	for(int i=0; i<n; i++)
		cout << s[i];
}
