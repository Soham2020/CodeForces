#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	sort(str.begin(), str.end());
	string :: iterator it;
	it = unique(str.begin(), str.end());
	str.resize(it - str.begin());
	if(str.length() % 2 == 0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}
