#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x = 101, amt = 0;
	while(n--)
	{
		int a, p;
		cin >> a >> p;
		if(x > p)
			x = p;
		amt += (x*a);
	}
	cout << amt;
}
