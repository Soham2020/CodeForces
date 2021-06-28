#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		
		bool ans = true;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<i; j++)
				ans &= abs(a[i] - a[j]) != 1;
		}
		cout << 2 - ans << "\n";
	}
}
