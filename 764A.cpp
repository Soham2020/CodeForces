#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m, z;
	cin >> n >> m >> z;
	vector <int> v1, v2;
	for(int i=1; i<=z; i++)
	{
		if((n*i) <= z)
			v1.push_back(n*i);
	}
	for(int i=1; i<=z; i++)
	{
		if((m*i) <= z)
			v2.push_back(m*i);
	}
	ll c = 0;
	for(int i=0; i<v1.size(); i++)
	{
		for(int j=0; j<v2.size(); j++)
		{
			if(v1[i] == v2[j])
				c++;
		}
	}
	cout << c;
}
