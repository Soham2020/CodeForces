#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll k, n, s, p;
	cin >> k >> n >> s >> p;
	ll sPerPerson= (n-1)/s+1;

    ll totalS= sPerPerson * k;

    ll totalP= (totalS-1)/p+1;

    cout<< totalP;
}
