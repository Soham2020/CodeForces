#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], b[n];
		int j=1, x=1;
		for(int i=1; i<=n; i++)
		{
			if(i%2==0)
			{
				a[j] = i;
				j++;
			}
			else
			{
				b[x] = i;
				x++;
			}
		}
		int s1=0, s2=0, s3=0;
		for(int i=1; i<=n/2; i++)
			s1 += a[i];
			
		for(int i=1; i<=n/2; i++)
			s2 += b[i];
		if(n%4 == 0)
		{
			if(s1!=s2)
			{
				b[n/2] = b[n/2] + n/2;
			}
			
			for(int i=1; i<=n/2; i++)
				s3 += b[i];
				
			cout<<"YES\n";
				
			for(int i=1; i<=n/2; i++)
				cout<<a[i]<<" ";
			
			for(int i=1; i<=n/2; i++)
				cout<<b[i]<<" ";
		}
		else
			cout<<"NO\n";
		
	}
		
}
