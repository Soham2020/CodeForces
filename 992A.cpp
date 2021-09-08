#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int time = 0;
	for(int i=0; i<n; i++)
		cin >> a[i];
	set <int> s(a, a+n);
	vector <int> v(s.begin(), s.end());
	for(int i=0; i<v.size(); i++)
	{
		if(v[i] != 0)
			time++;
	}
	cout << time;
}
