#include<bits/stdc++.h>
using namespace std;
typedef signed int si;

int main()
{
	si n;
	cin >> n;
	string s;
	cin >> s;
	
	si l=0, r=0;
	for(int i=0; i<n; i++)
	{
		if(s[i] == 'L')
			l = l - 1;
		if(s[i] == 'R')
			r = r + 1;
	}
	
	si c = 0;
	for(si i=l; i<=r; i++)
		c += 1;
		
	cout << c;
}
