#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, l, c = 0, rem;
	cin >> n;
	
	for(l=1; l<=n/2; l++)
	{
		rem = (n - l);
		if(rem%l == 0)
			c++;
	}
	
	cout << c;
}
