#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n], b[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++)
			cin>>b[i];
		
		ll sum=0;
		ll c = *min_element(a, a+n);
		ll d = *min_element(b, b+n);
		for(int i=0; i<n; i++)
			sum += max((a[i] - c), (b[i] - d));
			
		cout<<sum<<"\n";
	}
}
