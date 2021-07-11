#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a, b, c1 = 0, c2 = 0, c3 = 0 ;
	cin >> a >> b;
	for(int i=1; i<=6; i++)
	{
		if(abs(a - i) < abs(b - i))
			c1++;
		else if(abs(a - i) == abs(b - i))
			c2++;
		else
			c3++;
	}
	cout << c1 << " " << c2 << " " << c3;
}
