#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a1, a2, a3, a4;
	cin>>a1>>a2>>a3>>a4;
	string s;
	cin>>s;
	ll n = s.length(), res = 0;
	
	for(int i=0; i<n; i++)
	{
		if(s[i] == '1')
			res += a1;
		else if(s[i] == '2')
			res += a2;
		else if(s[i] == '3')
			res += a3;
		else if(s[i] == '4')
			res += a4;			
	}
	cout<<res;
}
