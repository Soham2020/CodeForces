#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	set <int> s;
	for(int i=0; i<n; i++)
	{
		int val;
		cin >> val;
		s.insert(val);
	}
	vector <int> v(s.begin(), s.end());
	if(v.size() < 2)
		cout << "NO";
	else 
		cout << v[1];
}
