#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a, b, c, s = 0;
	cin >> a >> b >> c;
	cout << min(a, min(b/2, c/4))*7;
}
