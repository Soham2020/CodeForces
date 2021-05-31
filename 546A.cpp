#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll k, n, w, sum=0;
	cin>>k>>n>>w;
	for(int i=1; i<=w; i++)
		sum += (k*i);
	if(sum <= n)
		cout<<0<<"\n";
	else
		cout<<sum-n	<<"\n";
}
