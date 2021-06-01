#include<bits/stdc++.h>
using namespace std;

int main()
{
	string sum;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(i%2!=0)
			sum = sum + "I hate that ";
		else
			sum = sum + "I love that ";
	}
	sum.replace(sum.length() - 5, sum.length() - 5, "it");
	cout<<sum;
}
