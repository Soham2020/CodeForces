#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], sum=0, max;
	
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	sort(a, a+n);
	
	max = a[n-1];
	
	for(int i=0; i<n; i++)
	{
		sum += abs(a[i] - max);
	}
	cout<<sum;
}
