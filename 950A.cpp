#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll l, r, a, s;
	cin >> l >> r >> a;
	if(l < r)
	{
        while(l < r && a > 0)
		{
            l++;
            a--;
        }
        cout << 2 * min(l + a / 2, r + a / 2);
    }
    else if(l > r)
	{
        while(l > r && a > 0)
		{
            r++;
            a--;
        }
        cout << 2 * min(l + a / 2, r + a / 2);
    }
    else if(l == r)
	{
        cout << (l + a / 2) * 2;
    }
}
