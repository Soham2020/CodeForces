#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int t;
	cin >> t;
	while(t--)
	{
		int n, d;
		cin >> n >> d;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		sort(a, a+n);
		int c = 0;
		for(int i=0; i<n; i++)
		{
			if(a[i] > d)
				a[i] = a[0] + a[1];
			
			if(a[i] > d)
				c += 1;
		}
		
		if(c == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
