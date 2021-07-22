#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll i,j,k;
    ll n;
    ll a,b;

    cin>>a>>b;
    i=1;

    while(true)
    {
        if(i>a)
        {
            cout<<"Vladik";
            return 0;
        }

        else
        {
            a-=i;
            i++;
        }
        if(i>b)
        {
            cout<<"Valera";
            return 0;
        }

        else
        {
            b-=i;
            i++;
        }
    }
}
