#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string solve(ll n, ll x, ll y)
{
	ll whiteMove =max(x-1,y-1);
    ll blackMove = max(n-x, n-y);
    if(whiteMove<=blackMove)
        return "White";
    else
        return "Black";
}

int main()
{
	ll n;
	cin >> n;
	ll x, y;
	cin >> x >> y;
	cout << solve(n, x, y);
}
