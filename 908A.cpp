#include<bits/stdc++.h>
using namespace std;

bool vowel(string s, int i)
{
	if(s[i] == 'a')
		return 1;
	else if(s[i] == 'e')
		return 1;
	else if(s[i] == 'i')
		return 1;
	else if(s[i] == 'o')
		return 1;
	else if(s[i] == 'u')
		return 1;
	else
		return 0;
}

bool num(string s, int i)
{
	if(s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')
		return 0;
	else
		return 1;
}

int main()
{
	int n, c = 0;
	string s;
	cin >> s;
	n = s.length();
	for(int i=0; i<n; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			if(vowel(s, i))
				c++;
		}
		if(s[i] >= '0' && s[i] <= '9')
		{
			if(num(s, i))
				c++;
		}
	}
	cout << c;
}
