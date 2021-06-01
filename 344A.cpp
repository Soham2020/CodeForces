#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x=1;
	cin>>n;
	string str;
	cin>>str;
	char c = str[1];
	for(int i=0; i<(n-1); i++)
	{
		cin>>str;
		char ch = str[0];
		
		if(c == ch)
			x++;

		c = str[1];
	}
	cout<<x<<endl;
}
