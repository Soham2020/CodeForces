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
		for(int k=2; k<30; k++)
		{
			int x = pow(2, k) - 1;
			if(n%x == 0)
			{
				cout << (n/x) << "\n";
				break;
			}
		}
	}
}
