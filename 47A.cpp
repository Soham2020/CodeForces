#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = n;
	for(int i=1; i<=t; i++)
	{
		if((i*(i+1))/2 == t)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
