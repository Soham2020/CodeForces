#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[110][110];
	int i, j, n, m, c = 0;
	cin>>n>>m;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		{
			if(a[i][j] == 'C' || a[i][j] == 'Y' || a[i][j] == 'M')
				c++;
		}
	}
	
	if(c > 0)
		cout<<"#Color";
	else
		cout<<"#Black&White";
}
