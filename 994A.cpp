#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int s[n], f[m];
	for(int i=0; i<n; i++)
		cin >> s[i];
	for(int i=0; i<m; i++)
		cin >> f[i];
	vector <int> v;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(s[j] == f[i])
				v.push_back(j);
		}
	}
	sort(v.begin(), v.end());
	if(!v.empty())
	{
		for(int i=0; i<v.size(); i++)
			cout << s[v[i]] << " ";
	}
	else
		cout << "\n";
}
