#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	if(n > 5)
		cout<<(( round ( ( ( n + 4 ) / 5 ) * 5 ) ) / 5);
	else
		cout<<1;
}
