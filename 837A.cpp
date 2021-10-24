#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; 
        char s[205]; 
        while(cin>>n) 
        { 
            int sum=0,maxs=0; 
            getchar(); 
            gets(s); 
            for(int i=0;i<=n-1;i++) 
            { 
                if(s[i]>='A'&&s[i]<='Z') 
                    sum++; 
                if(s[i]==' '||i==n-1)    
                { 
                    if(sum>maxs)  
                        maxs=sum; 
                    sum=0;  
                } 
            } 
            cout<<maxs<<endl; 
        } 
}
