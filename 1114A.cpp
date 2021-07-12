#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll x, y, z;
	cin >> x >> y >> z;
	ll a, b, c;
	cin >> a >> b >> c;
	if(x > a)
		cout << "No\n";
	else if((x+y) > (a+b))
		cout << "No\n";
	else if((x+y+z) > (a+b+c))
		cout << "No\n";
	else
		cout << "Yes\n";
}
