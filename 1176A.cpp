#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll c = 0;
		while(n > 1)
		{
			if(n%2 == 0){
				n = n>>1;
				c++;
			}
			else if(n%5 == 0){
				n = (4*n)/5;
				c++;
			}
			else if(n%3 == 0){
				n = (2*n)/3;
				c++;
			}
			else{
				cout << -1 << "\n";
				break;
			}
		}
		if(n == 1)
			cout << c << "\n";
	}
}
