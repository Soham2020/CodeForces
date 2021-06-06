#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n], b[n];
		for(int i=1; i<=n; i++)
			cin>>a[i];
		
		sort(a+1, a+n+1);
	//	for(int i=1; i<=n; i++)
	//		cout<<a[i]<<" ";
		ll min;
		for(int i=1; i<=n; i++)
		{
			min = abs(a[i] - a[i+1]);
			b[i] = min;
		}
		
		cout<< *min_element(b+1, b+n) << "\n";
	}
}
