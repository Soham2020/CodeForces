#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		if(b == 1)
		{
			int a1 = 0, a2 = 0;
			int rowa = (a-1) - x;
			int rowb = (x) - 0;
			a1 = rowa * b;
			a2 = rowb * b;
			cout << max(a1, a2);
		}
		else if(a == 1)
		{
			int a1 = 0 , a2 = 0;
			int cola = (b-1) - y;
			int colb = (y) - 0;
			a1 = cola * a;
			a2 = colb * a;
			cout << max(a1, a2);
		}
		else
		{
			int a1 = 0, a2 = 0;
			int rowa = a - 1 - x;
			int rowb = x - 0;
			a1 = rowa * b;
			a2 = rowb * b;
			int area1 = max(a1, a2);
			
			int b1 = 0, b2 = 0;
			int cola = b - 1 - y;
			int colb = y;
			b1 = cola * a;
			b2 = colb * a;
			int area2 = max(b1, b2);
			
			cout << max(area1, area2);
		}
		cout << "\n";
	}
}
