#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1, str2;
	cin>>str1;
	vector <char> v;
	for(int i=0; str1[i]!='\0'; i++)
	{
		if(str1[i] != '+')
			v.push_back(str1[i]);
	}
	int n = v.size();
	sort(v.begin(), v.end());
	for(auto x = v.begin(); x!=v.end()-1; x++)
		cout<<*x<<"+";
	cout<<v[n-1];
}
