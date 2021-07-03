#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	n = n%4;
	if(n == 0 || n == 3)
		cout << 0;
	else
		cout << 1;
}
