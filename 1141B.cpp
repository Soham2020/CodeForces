#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	int count = 0, mx = 0, flag = 2;
	while(flag--)
	{
		for(int i=0; i<n; i++)
		{
			if(v[i%n] == 0)
				count = 0;
			else
			{
				count++;
				mx = max(mx, count);
			}
		}
	}
	cout << mx;
}
