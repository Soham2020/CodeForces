#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector <int> v1, v2;
	cin>>n;
	while(n--)
	{
		int a, b;
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	int c=0;
	for(int i=0; i<v1.size(); i++)
	{
		for(int j=0; j<v2.size(); j++)
		{
			if(v1[i] == v2[j])
				c++;
		}
	}
	cout<<c;
}
