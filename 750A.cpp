#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t = 240, n, k, sum=0, c=0;
	cin>>n>>k;
	int dif = abs(t - k);
	for(int i=1; i<=n; i++)
	{
		sum = sum + (5 * i);
		
		if(sum <= dif)
			c++;
	}
	cout<<c;
}
