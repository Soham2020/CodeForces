#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	char c = s[n - 1];
	if(c <= '5')
	{
		s.pop_back();
		s.push_back('0');
		cout << stoi(s);
	}
	else
	{
		if(s.length() == 1)
			cout << 10;
		else
		{
			int x = stoi(s);
			int mod = x%10;
			cout << x + (10 - mod);
		}
	}
}
