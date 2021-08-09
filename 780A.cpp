#include<bits/stdc++.h>

#define maxn 100005

using namespace std;

int n,pos,ans,pos_;

char Cget;

bool if_[maxn];

inline void in(int &now)
{
    now=0,Cget=getchar();
    while(Cget>'9'||Cget<'0') Cget=getchar();
    while(Cget>='0'&&Cget<='9')
    {
        now=now*10+Cget-'0';
        Cget=getchar();
    }
}

int main()
{
    in(n);
    for(int i=1;i<=(n<<1);i++)
    {
        in(pos_);
        if(!if_[pos_])
        {
            if_[pos_]=true;
            pos++;
            ans=max(ans,pos);
        }
        else pos--;
    }
    cout<<ans;
    return 0;
}
