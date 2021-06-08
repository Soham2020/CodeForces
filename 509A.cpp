#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100][100];
	int i, j, n;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i == 1)
				a[i][j] = 1;
			else
				a[i][j] = a[i-1][j] + a[i][j-1];
		}
	}
	
	cout<<a[n][n];
}
