#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll w;
	cin>>w;
	if(w <= 2)
		cout<<"NO\n";
	else
	{
		if(w%2==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
