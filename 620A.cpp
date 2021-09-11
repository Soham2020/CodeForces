#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll x1, y1, x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	ll d1 = abs((x1) - (x2));
	ll d2 = abs((y1) - (y2));
	if(d1 != d2)
		cout << max(d1, d2);
	else
		cout << d1;
}
