#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v;
	int n, a, b, cap=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a>>b;
		cap = cap - a;
		cap = cap + b;
		v.push_back(cap);
	}
	cout << *max_element(v.begin(), v.end());
}
