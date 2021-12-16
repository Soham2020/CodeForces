#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, even = 0, odd = 0;
		cin >> n;
		for(int i=0; i<n; i++)
		{
			int a;
			cin >> a;
			if(a%2 == 0)
				even++;
			else
				odd++;
		}
		if(even&&odd)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
