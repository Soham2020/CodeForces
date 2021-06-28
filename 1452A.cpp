#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = max(x, y) * 2 - 1;
        if(x == y) 
			ans++;
        cout << ans << endl;
    }
}
