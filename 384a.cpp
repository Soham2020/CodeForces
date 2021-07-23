#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c = 0;
	cin >> n;
	char a[1001][1001];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(((i%2 == 0) && (j%2 == 0)) || ((i%2 == 1) && (j%2 == 1)))
			{
				a[i][j] = 'C';
				c++;
			}
			else
				a[i][j] = '.';
		}
	}
	cout << c << "\n";
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
			cout << a[i][j];
		cout << "\n";
	}
}
