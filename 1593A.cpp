#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		if(a == b && b == c && c == a)
			cout << (a+1) << " " << (b+1) << " " << (c+1) << " ";
		else
		{
			ll arr[3];
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			ll m = *max_element(arr, arr+3);
			for(ll i=0; i<3; i++)
			{
				if(arr[i] != m)
					arr[i] = m - arr[i] + 1;
				else
					arr[i] = m - arr[i];
			}
			for(auto i:arr)
				cout << i << " ";
		}
		cout << "\n";
	}
}
