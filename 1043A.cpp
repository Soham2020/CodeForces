#include<bits/stdc++.h>
using namespace std;

vector <int> copy(int a[], int n)
{
	vector <int> b(n);
	for(int i=0; i<n; i++)
		b[i] = a[i];
	return b;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	vector <int> b(n);
	b = copy(a, n);
	int s = accumulate(a, a+n, 0);
	int m = *max_element(a, a+n);
	for(int k=m; k<=201; k++)
	{
		int res = 0; 
		for(int i=0; i<n; i++)
			b[i] = k - a[i];
		res = accumulate(b.begin(), b.end(), 0);
		if(res > s)
		{
			cout << k;
			break;
		}
		b = copy(a, n);
	}
}
