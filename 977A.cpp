#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
	ll n, k;
	cin>>n>>k;
	for(int i=1; i<=k; i++)
	{
		if(n%10 == 0)
		{
			n = n / 10;
		}
		else
		{
			n = n - 1;
		}
	}
	cout<<n;	
}
