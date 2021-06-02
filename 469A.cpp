#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int n, p, q;
	cin>>n;
	ll a[200];
	cin>>p;
	for(int i=0; i<p; i++)
		cin>>a[i];
	cin>>q;
	for(int i=p; i<(p+q); i++)
		cin>>a[i];
		
	sort(a, a+(p+q));
	int c=0;
	for(int i=0; i<(p+q); i++)
	{
		if(a[i] != a[i+1])
			c++;
	}
	if(c == n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
}
