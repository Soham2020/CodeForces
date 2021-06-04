#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.length();
		if(n == 2)
			cout<<s;
		else
		{
			cout<<s[0]<<s[1];
			for(int i=2; i<n; i+=2)
			{
				cout<<s[i+1];
			}
		}
		cout<<"\n";
	}
}
