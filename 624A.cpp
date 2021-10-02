#include<bits/stdc++.h>
using namespace std;

int main()
{
	float d,l,v1,v2;
	cin>>d>>l>>v1>>v2;
	float num=l-d;
	float den=v1+v2;
	float ans=num/den;
	cout<<setprecision(7)<<ans;
}
