#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,h,m;
    ll l,r,x;
    cin >> n >> h >> m;
    ll a[n+1];
    for(int i=1; i<=n; i++)
	{
        a[i] = h;
    }
    for(int i=0; i<m; i++)
	{
        cin >> l >> r >> x;

        for(int j=l; j<=r; j++)
		{
            if(x < a[j])
			{
                a[j] = x;
            }
        }
    }
    ll sum = 0;
    for(int i=1; i<=n; i++)
	{
        sum += (a[i] * a[i]);
    }
    cout << sum << endl;
}
