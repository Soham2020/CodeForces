#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	
	for(int i=0; i<n; )
	{
		if(s[i] == '.')
		{
			cout << 0;
			i += 1;
		}
		
		else if(s[i] == '-')
		{
			if(s[i+1] == '.')
			{
				cout << 1;
				i += 2;
			}
			else if(s[i+1] == '-')
			{
				cout << 2;
				i += 2;
			}
		}
	}
}
