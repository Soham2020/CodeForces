#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, d, c = 0;
	cin >> n >> d;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			int k = abs(a[i] - a[j]);
			if(k >= 0 && k <= d)
				c++;
		}
	}
	cout << (c*2);
}
