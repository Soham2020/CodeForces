#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i=0, count=0;
	vector <char> str;
	while(i < n)
	{
		if(s[i] == 'U' && s[i+1] == 'R')
		{
			str.pb('D'); 
			count++;
			i+=2;
		}
		else if(s[i] == 'R' && s[i+1] == 'U')
		{
			str.pb('D');
			count++;
			i+=2;
		}
		else
		{
			str.pb(s[i]);
			count++;
			i++;
		}
	}
	cout << count << "\n";
	cout << str.size();
}
