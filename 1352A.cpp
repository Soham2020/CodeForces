#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int a[10000];
		cin>>n;
		
		int i=0, c=0;
		while(n>0)
		{
			int d = n%10;
			a[i] = d;
			i = i + 1;
			n = n/10;
		}
		for(int j=0; j<i; j++)
		{
			if(a[j]!=0)
				c++;
		}
		cout<<c<<"\n";
		for(int j=0; j<i; j++)
		{
			if(a[j]!=0)
				cout<<(a[j] * pow(10, j))<<" ";
			else
				continue;
		}
		cout<<"\n";
	}
}
