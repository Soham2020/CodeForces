#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(int i=1; i<=n; i++)
			a[i] = pow(2, i);
		
		ll s1=0, s2=0;
		for(int i=1; i<=n/2-1; i++)
			s1 += a[i];
		for(int i=n/2; i<=n-1; i++)
			s2 += a[i];
		cout<<(s1+pow(2, n))-(s2)<<"\n";
	}
}
