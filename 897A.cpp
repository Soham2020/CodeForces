#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	for(int i=0; i<m; i++)
	{
		int l, r;
		cin >> l >> r;
		char c1, c2;
		cin >> c1 >> c2;
		for(int j=(l-1); j<=(r-1); j++)
		{
			if(s[j] == c1)
				s[j] = c2;
		}
	}
	for(auto x:s)
		cout << x;
}
