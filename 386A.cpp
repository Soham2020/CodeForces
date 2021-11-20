#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int p[n];
	for(int i=0; i<n; i++)
		cin >> p[i];
	int index, mx = p[0];
	for(int i=0; i<n; i++)
	{
		if(mx <= p[i])
		{
			mx = p[i];
			index = i;
		}
	}
	sort(p, p+n);
	int s = p[n-2];
	cout << index+1 << " " << s;
}
