#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string s1 = "1111111";
	string s0 = "0000000";
	if(str.find(s0) != string::npos || str.find(s1) != string::npos)
		cout << "YES";
	else
		cout << "NO";
}
