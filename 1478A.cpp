#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		vector <int> v;
			
		int c = 0;
		for(int i=0; i<n; i++)
		{
			v.push_back(count(a, a+n, a[i]));
		}
		cout << *max_element(v.begin(), v.end()) << "\n";
	}
}
