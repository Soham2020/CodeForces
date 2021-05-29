#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, x=0;
	cin>>n;
	string str;
	while(n--)
	{
		cin>>str;
		if(str[1] == '+')
			x = x + 1;
		else
			x = x - 1;
	}
	cout<<x<<"\n";
}
