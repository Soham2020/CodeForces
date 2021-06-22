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
		
		string ans = "1";
		int last = (s[0] - '0') + 1;
		
		for(int i=1; i<n; i++)
		{
			if((s[i] - '0')+1 != last)
			{
				ans += '1';
				last = (s[i]-'0') + 1;
			}
			else
			{
				last = (s[i] - '0');
				ans += '0';
			}
		}
		cout << ans << "\n";
	}
}
