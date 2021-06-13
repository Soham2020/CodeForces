#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		string c;
		
		for(int i=0; i<s.length(); i+=2)
		{
			c += s[i];
		}
		cout << c << "\n";
	}
}
