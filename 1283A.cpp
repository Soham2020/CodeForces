#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h, m, rem;
		cin>>h>>m;
		if(h>0)
		{
			rem = 1440 - ((h * 60) + m);
		}
		else
			rem = 1440 - m;
			
		cout << rem << "\n";
	}
}
