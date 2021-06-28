#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string t;
	cin >> t;
	int move = 1, j = 0;
	for(int i=0; i<t.length(); i++)
	{
		if(s[j] == t[i])
		{
			move++;
			j++;
		}
	}
	cout << move << "\n";
}
