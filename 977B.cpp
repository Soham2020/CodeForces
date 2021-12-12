#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string, int>& a, pair <string, int>& b)
{
	return (a.second > b.second);
}

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	unordered_map <string, int> mp;
	for(int i=0; i<n-1; i++)
	{
		string x = "";
		x += str[i];
		x += str[i+1];
		mp[x]++;
	}
	vector <pair <string, int>> vp;
	for(auto i:mp)
		vp.push_back(i);
	sort(vp.begin(), vp.end(), comp);
	cout << vp[0].first;
}
