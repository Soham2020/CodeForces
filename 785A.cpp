#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n, sum=0;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0] == 'T')
			sum = sum + 4;
		else if(s[0] == 'C')
			sum = sum + 6;
		else if(s[0] == 'O')
			sum = sum + 8;
		else if(s[0] == 'D')
			sum = sum + 12;
		else if(s[0] == 'I')
			sum = sum + 20;
	}
	cout<<sum;
}
