#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int flag = 0, s1 = 0, s2 = 0;
	for(int i=0; i<n; i++)
	{
		if(s[i] == '4' || s[i] == '7')
			flag++;
		else
		{
			flag = 1;
			cout << "NO";
			break;
		}
	}
	if(flag != 1)
	{
		for(int i=0; i<n/2; i++)
		{
			int x = s[i] - '0';
			s1 += x;
		}
		for(int i=n/2; i<n; i++)
		{
			int x = s[i] - '0';
			s2 += x;
		}
		if(s1 == s2)
			cout << "YES";
		else
			cout << "NO";
	}
}
