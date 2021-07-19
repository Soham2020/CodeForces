#include <bits/stdc++.h>

using namespace std;
bool mentioned[6];
int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
	{
        cin>>s;
        if(s=="purple") mentioned[0]=1;
        else if(s=="green") mentioned[1]=1;
        else if(s=="blue") mentioned[2]=1;
        else if(s=="orange") mentioned[3]=1;
        else if(s=="red") mentioned[4]=1;
        else if(s=="yellow") mentioned[5]=1;
    }
    cout<<6-n<<'\n';
    if(mentioned[0]==0) cout<<"Power\n";
    if(mentioned[1]==0) cout<<"Time\n";
    if(mentioned[2]==0) cout<<"Space\n";
    if(mentioned[3]==0) cout<<"Soul\n";
    if(mentioned[4]==0) cout<<"Reality\n";
    if(mentioned[5]==0) cout<<"Mind\n";
}
