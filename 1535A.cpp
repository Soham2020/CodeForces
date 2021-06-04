#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{

		int a, b, c, d;
		cin>>a>>b>>c>>d;
		int x1 = min(a, b);
		int y1 = max(a, b);
		int x2 = min(c, d);
		int y2 = max(c, d);
		
		
		if((x1<y2) && (x2<y1))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
