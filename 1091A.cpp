#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll y, b, r;
	cin >> y >> b >> r;
	cout << min(y+2, min(b+1, r)) * 3 - 3;
}
