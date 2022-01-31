#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector <int> v;
	while(n--)
	{
		int f, t;
		cin >> f >> t;
		if(t > k)
			f -= (t-k);
		v.push_back(f);
	}
	cout << *max_element(v.begin(), v.end());
}
