#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 0 ;
	cin >> n;
	string s;
	cin >> s;
	
	for(int i=0; i<n; i++)
	{
		if(s[i] == 'x')
		{
			if(s[i+1] == 'x')
			{
				if(s[i+2] == 'x')
					c += 1;
			}
		}
	}
	
	cout << c;
}
