#include<bits/stdc++.h>
using namespace std;

bool solve(string str)
{
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]!= '1' && str[i]!= '4')
			return false;
	}
	
	if(str[0] == '4')
		return false;
	if(str.find("444") != str.npos)
		return false;
	return true;
}

int main()
{
	string str;
	cin >> str;
	if(solve(str))
		cout << "YES";
	else
		cout << "NO";
}
