#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int m, int l, int r)
{
	int len = (l-r+1);
	if(len%2 == 0)
	{
		if(count(a+1, a+n+1, 1) > len/2 && count(a+1, a+n+1, -1) > len/2)
			return 1;
	}
	return 0;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		cout << solve(a, n, m, l, r) << "\n";
	}
}
