#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, c = 0;
	cin >> n;
	ll a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	  for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                a[i]=0;
          }
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]>0) c++;
    }
    cout<<c<<endl;
    for(int i=0; i<n; i++){
        if(a[i]>0)
        	cout << a[i] << " ";
    }
}
