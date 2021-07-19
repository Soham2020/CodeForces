#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin >> n;
	ll a[n], b[n];
	for(int i=1; i<=n; i++)
		cin >> a[i];
	for(int i=1; i<=n; i++)
	{
		b[i] = a[i];	
	}
	sort(a+1, a+n+1, greater<int>());
//	for(int i=1; i<=n; i++)
//		cout << a[i] << " ";
//	cout << "\n";
	vector <int> v;
	v.push_back(1);
	for(int i=2; i<=n; i++)
	{
		if(a[i] == a[i-1])
			v.push_back(i-1);
		else
			v.push_back(i);
	}
//	for(auto x:v)
//		cout << x << " ";
//	cout << "\n";
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(b[i] == a[j]){
				cout << v[j-1] << " ";
				break;
			}
		}
	}
}
