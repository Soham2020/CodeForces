#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll i,j,k;
    ll n,m;
    ll A,B,t=0;
    ll x,y,z;

    cin >> A >> B;
    cin >> x >> y >> z;

    if(A < (2*x+y))
        t += ((2*x+y)-A);

    if(B < (y+3*z))
        t += ((3*z+y)-B);

    cout << t;
}
