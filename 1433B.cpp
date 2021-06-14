#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		int c = 0, lb = 0, ub = 0;
		for(int i=0; i<n; i++)
		{
			if(c == 0)
			{
				if(a[i] == 1)
				{
					lb = i;
					c += 1;
				}
			}
			else
			{
				if(a[i] == 1)
					ub = i;
			}
		}
		
		int z = 0;
		if(ub != 0)
		{
			for(int i=lb; i<=ub; i++)
			{
				if(a[i] == 0)
					z += 1;
			}
			
			cout << z << "\n";
		}
		else
			cout << 0 << "\n";
	}
}
