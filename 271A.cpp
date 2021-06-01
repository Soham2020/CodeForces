#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll y, a, b, c, d;
	cin>>y;
	while(true)
	{
		y += 1;
		a=y%10; b= (y/10)%10; c= (y/100)%10; d= (y/1000)%10;
		
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			break;
		}
	}
	cout<<y<<endl;
}
