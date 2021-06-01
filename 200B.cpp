#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long double sum=0.0;
	cin>>n; 
	double a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	for(int i=0; i<n; i++)
	{
		sum += a[i];
	}
	
	long double res = sum / (long double)n;
	cout<<fixed<<setprecision(12)<<res;
}
