#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map <int, int> mp;
	int n;
	cin >> n;
	int res = n;
	while(n--)
	{
		int r;
		cin >> r;
		while(r--)
		{
			int x;
			cin >> x;
			mp[x]++;
		}
	}
	for(auto i:mp)
	{
		if(i.second == res)
			cout << i.first << " ";
	}
}
