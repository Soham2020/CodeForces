#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int n, m, c = 0;
	cin >> n >> m;
	
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(((pow(i, 2) + j) == n) && ((i + pow(j, 2)) == m))
				c += 1;
		}
	}
	cout << c ;
}
