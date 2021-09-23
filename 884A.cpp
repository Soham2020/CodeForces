#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int i, j, k;
	int n, t, m;

	cin >> n >> t;

	int cnt = 0;
	while (n--)
	{
		cin >> m;

		k = 86400 - m;
		t -= k; cnt++;

		if (t <= 0)
			break;
	}

	cout << cnt;
}
