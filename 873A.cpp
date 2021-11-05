#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, x;
	cin >> n >> k >> x;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	int j = n-1;
	while(k--)
	{
		a[j] = x;
		j--;
	}
	cout << accumulate(a, a+n, 0);
}
