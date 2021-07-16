#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, flag = 1;
		string s;
		cin >> s;
		n = s.length();
		sort(s.begin(), s.end());
		for(int i=0; i<n-1; i++)
		{
			if(abs(s[i] - s[i+1]) != 1)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
