#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	set <int> s;
	for(int i=0; i<n; i++)
	{
		if(a[i] != 0)
			s.insert(a[i]);
	}
	cout << s.size();
}
