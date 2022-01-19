#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 0;
	cin >> n;
	int x = n;
	while(x--)
	{
		int a;
		cin >> a;
		if(a%2 != 0)
			c++;
	}
	cout << min(c, n-c);
}
