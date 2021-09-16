#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
           int ans=abs(a-b);
        int c=ans%5;
        int sum=(ans-c)/5;
        ans=c%2;
        sum+=(c-ans)/2+ans;
        cout<<sum<<endl;
    }
}
