#include<bits/stdc++.h>
using namespace std;

int time(int a[], int n)
{
	if(a[0] > 15)
		return 15;
	for(int i=0; i<n-1; i++)
	{
		int d = abs(a[i] - a[i+1]);
		if(d > 15)
			return (a[i] + 15);
	}
	return a[n-1];
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << time(a, n);
}
