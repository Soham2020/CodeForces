#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll s, v1, v2, t1, t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	ll p1 = t1 + (v1*s) + t1;
	ll p2 = t2 + (v2*s) + t2;
	if(p1<p2)
		cout << "First";
	else if(p1>p2)
		cout << "Second";
	else
		cout << "Friendship";
}
