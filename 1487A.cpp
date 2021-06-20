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
		vector <int> v(n);
		for(int&x : v)
			cin >> x;
		
		cout << n - count(v.begin(), v.end(), *min_element(v.begin(), v.end())) << "\n";
	}
}
