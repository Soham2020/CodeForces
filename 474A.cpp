#include<bits/stdc++.h>
using namespace std;

char find(vector<vector<char>> v, char s)
{
	for(int i=0; i<v.size(); i++)
	{
		for(int j=0; j<v[i].size(); j++)
		{
			if(v[i][j] == s)
				return v[i][j-1];
		}
	}
	return '0';
}

char findL(vector<vector<char>> v, char s)
{
	for(int i=0; i<v.size(); i++)
	{
		for(int j=0; j<v[i].size(); j++)
		{
			if(v[i][j] == s)
				return v[i][j+1];
		}
	}
	return '0';
}

int main()
{
	vector <vector <char>> v = { {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'} };
	char dir;
	cin >> dir;
	string s;
	cin >> s;
	if(dir == 'R')
	{
		string res = "";
		for(int i=0; i<s.length(); i++)
		{
			if(find(v, s[i]) != '0')
				res += find(v, s[i]);
		}
		cout << res;
	}
	else if(dir == 'L')
	{
		string res = "";
		for(int i=0; i<s.length(); i++)
		{
			if(findL(v, s[i]) != '0')
				res += findL(v, s[i]);
		}
		cout << res;
	}
}
