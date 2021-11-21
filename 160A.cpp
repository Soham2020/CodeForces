#include<bits/stdc++.h>
using namespace std;

int sum(int a[], int k, int n)
{
	int s = 0;
	for(int i=k+1; i<n; i++)
		s += a[i];
	return s;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	sort(a, a+n, greater<int>());
	int c = 0;
	int t = 0, s;
	for(int i=0; i<n; i++)
	{
		t += a[i];
		s = sum(a, i, n);
		c++;
		if(t > s)
			break;
	}
	cout << c;
}
