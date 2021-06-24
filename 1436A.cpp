#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, c = 0;
		cin >> n >> m;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			c += a[i];
		}
		
		if(c == m)
			cout << "YES\n";
		else
			cout << "NO\n";	
	}
}
