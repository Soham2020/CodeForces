#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		char c = s[0];
		ll flag = 1;
		for(ll i=0; i<n; i++)
		{
			if(s[i] != c)
			{
				for(ll j=i+1; j<n; j++)
				{
					if(s[j] == c)
					{
						flag = 0;
						break;
					}
				}
				c = s[i];
			}
		}
		if(flag == 1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
//		string a;
//		ll j=0;
//		for(ll i=0; i<n; i++)
//		{
//			if(s[i] != s[i+1]){
//				a[j] = s[i];
//				j++;
//			}
//		}
//		a[j] = '\0';
//	//	for(int i=0; a[i]!='\0'; i++)
//	//		cout<<a[i];
//		
//		ll c=0;
//		for(ll i=0; a[i]!='\0'; i++)
//		{
//			for(ll k=(i+1); a[k]!='\0'; k++)
//			{
//				if(a[i] == a[k])
//					c++;
//			}
//		}
//		
//		if(c == 0)
//			cout<<"YES\n";
//		else
//			cout<<"NO\n";
	}
}
