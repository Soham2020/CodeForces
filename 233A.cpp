#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=1; i<=n; i++)
		a[i] = i;
		
	if(n%2 == 1)
		cout << -1;
	else
	{
		cout << "2 1";
		for(int i=3; i<n; i+=2)
			cout << " " << i+1 << " " << i;
	}
}