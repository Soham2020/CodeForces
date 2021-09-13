#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int m = n;
		vector <int> a;
		for(int i=0; i<n; i++)
		{
			int val;
			cin >> val;
			a.pb(val);
		}
		int c = 0;
		while(!is_sorted(a.begin(), a.end()))
		{
			for(int i=c%2; i+1<n; i+=2)
			{
				if(a[i] > a[i+1])
					swap(a[i], a[i+1]);
			}
			c += 1;
		}
		cout << c << "\n";
	}
}
