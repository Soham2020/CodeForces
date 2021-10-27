#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	int sum = accumulate(a, a+n, 0);
	int m = *max_element(a, a+n);
	if(abs(sum-m) <= s)
		cout << "YES";
	else
		cout << "NO";
}
