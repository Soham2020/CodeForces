#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string s1, s2;
	cin>>s1;
	cin>>s2;
	ll n1 = s1.length();
	ll n2 = s2.length();
	string s3[n1];
	for(ll i=0; i<n1; i++)
	{
		if(s1[i] == s2[i])
			s3[i] = '0';
		else
			s3[i] = '1';
	}
	for(ll i=0; i<n1; i++)
		cout<<s3[i];
}
