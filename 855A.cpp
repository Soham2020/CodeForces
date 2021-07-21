#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 0, i, j;
	cin >> n;
	string s[n];
	for(i=0; i<n; i++)
	{
		cin >> s[i];
		for(j=0; j<i; j++)
		{
			if(s[i] == s[j])
				break;
		}
		if(j == i)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
