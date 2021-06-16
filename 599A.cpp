#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	
	ll l1 = d1 + d2 + d3;
	ll l2 = (d1+d3) << 1;
	ll l3 = (d1+d2) << 1;
	ll l4 = (d2+d3) << 1;
	
	ll a[5];
	for(int i=1; i<=4; i++)
	{
		if(i == 1)
			a[i] = l1;
		else if(i == 2)
			a[i] = l2;
		else if(i == 3)
			a[i] = l3;
		else if(i == 4)
			a[i] = l4;
	}
	
	cout << *min_element(a+1, a+5);
}
