#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 0;
	cin >> n;
	char M[n][n];
	for(int i=0; i<n; i++)
	{
		cin >> M[i];
	}
	if(n >= 3)
	{
		for(int i=1; i<n-1; i++)
		{
			for(int j=1; j<n-1; j++)
			{
				if((M[i-1][j-1] == 'X') && (M[i-1][j+1] == 'X') && (M[i+1][j-1] == 'X') && (M[i+1][j+1] == 'X'))
					c++;
			}
		}
	}
	cout << c;
}
