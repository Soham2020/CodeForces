#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	cin >> s1;
	string s2 = "heidi";
	int i=0, j=0, n=s1.length(), m=s2.length();
	while(i<n && j<m)
	{
		if(s1[i] == s2[j])
			j++;
		i++;
	}
	if(j == m)
		cout << "YES";
	else
		cout << "NO";
}
