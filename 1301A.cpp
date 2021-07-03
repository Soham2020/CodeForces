#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	while(n--)
	{
		string a;
		cin >> a;
		string b;
		cin >> b;
		string c;
		cin >> c;
		for(int i=0; i<c.length(); i++)
		{
			if(c[i] != a[i])
				a[i] = c[i];
			else if(c[i] != b[i])
				b[i] = c[i];
		}
		if(a == b)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
