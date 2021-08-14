#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	string t;
	cin >> t;
	for(int i=0; i<t.length(); i++)
	{
		if(t[i] >= '0' && t[i] <= '9')
			cout << t[i];
		else
		{
			for(int j=0; j<s1.length(); j++)
			{
				char c = tolower(t[i]);
				if(c == s1[j])
				{
					if(t[i] >= 'A' && t[i] <= 'Z')
					{
						char v = toupper(s2[j]);
						cout << v;
					}
					else
						cout << s2[j];
				}
			}
		}
	}
}
