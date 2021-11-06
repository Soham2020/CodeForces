#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin >> a[i][j];
	}
	vector <int> col;
	vector <int> row;
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<n; j++)
			sum += a[i][j];
		row.pb(sum);
	}
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<n; j++)
			sum += a[j][i];
		col.pb(sum);
	}
	int count = 0;
	for(int i=0; i<col.size(); i++)
	{
		for(int j=0; j<row.size(); j++)
		{
			if(col[i] > row[j])
				count++;
		}
	}
	cout << count;
}
