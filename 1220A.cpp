#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	vector<int> v;
	
	for(int i=0; i<n; i++)
	{
		if(s[i] == 'n')
			v.push_back(1);
		if(s[i] == 'z')
			v.push_back(0);
	}
	
	sort(v.begin(), v.end(), greater<int>());
	
	for(auto x:v)
		cout << x << " ";
}
