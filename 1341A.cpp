#include<bits/stdc++.h>
using namespace std;

string solve(int n, int a, int b, int c, int d)
{
	int t1 = (a-b)*n;
	int t2 = (a+b)*n;
	if(t1 > (c+d) || t2 < (c-d))
		return "NO";
	return "YES";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		cout << solve(n, a, b, c, d) << "\n";
	}
}
