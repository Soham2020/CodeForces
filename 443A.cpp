#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
		{
			s.erase(i, 1);
			i--;
		}
	}
	int n = s.length();
	sort(s.begin(), s.end());
	int c=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] != s[i+1])
			c++;
	}
	cout<<c;
}
