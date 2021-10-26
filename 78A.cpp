#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	getline(cin, s1);
	string s2;
	getline(cin, s2);
	string s3;
	getline(cin, s3);
	vector <char> st = { 'a', 'e', 'i', 'o', 'u' };
	int c1 = 0, c2 = 0, c3 = 0;
	for(int i=0; i<s1.length(); i++)
	{
		if(find(st.begin(), st.end(), s1[i]) != st.end())
			c1++;
	}
	for(int i=0; i<s2.length(); i++)
	{
		if(find(st.begin(), st.end(), s2[i]) != st.end())
			c2++;
	}
	for(int i=0; i<s3.length(); i++)
	{
		if(find(st.begin(), st.end(), s3[i]) != st.end())
			c3++;
	}
	if(c1 == 5 && c2 == 7 && c3 == 5)
		cout << "YES";
	else
		cout << "NO";
}
