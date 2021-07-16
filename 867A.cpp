#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll c1=0, c2=0;
	for(int i=0; i<n-1; i++)
	{
		if(s[i] == 'S')
		{
			if(s[i+1] == 'F')
				c1++;
		}
		else if(s[i] == 'F')
		{
			if(s[i+1] == 'S')
				c2++;
		}
	}
	if(c1 > c2)
		cout << "YES";
	else
		cout << "NO";
}
