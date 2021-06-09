#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	string a1, a2, a3, a4, a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	
	int c = 0;
	
	if(s[0] == a1[0])
		c++;
	else if(s[0] == a2[0])
		c++;
	else if(s[0] == a3[0])
		c++;
	else if(s[0] == a4[0])
		c++;
	else if(s[0] == a5[0])
		c++;
	
	if(s[1] == a1[1])
		c++;
	else if(s[1] == a2[1])
		c++;
	else if(s[1] == a3[1])
		c++;
	else if(s[1] == a4[1])
		c++;
	else if(s[1] == a5[1])
		c++;
		
	if(c > 0)
		cout << "YES";
	else
		cout << "NO";
}
