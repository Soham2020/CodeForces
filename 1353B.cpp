#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int a[n], b[n], sum1=0, sum2=0, res;
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		for(int i=0; i<n; i++)
			cin>>b[i];
			
		sort(a, a+n);
		sort(b, b+n, greater<int>());
		
		if(k!=0)
		{
			for(int i=0; i<k; i++)
			{
				for(int j=i; j<k; j++)
				{
					if(a[i] < b[j])
						swap(a[i], b[j]);
				}
			}
			for(int i=0; i<n; i++)
				sum1 += a[i];
			cout<<sum1<<"\n";
		}
		else
		{
			for(int i=0; i<n; i++)
				sum2 += a[i];
			cout<<sum2<<"\n";
		}
			
		sum1=0;
		sum2=0;
		res=0;
	}
}
