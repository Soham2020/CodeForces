#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	if(find(s.begin(), s.end(), 'H') != s.end())
		cout << "YES";
	else if(find(s.begin(), s.end(), 'Q') != s.end())
		cout << "YES";
	else if(find(s.begin(), s.end(), '9') != s.end())
		cout << "YES";
	else
		cout << "NO";
}
