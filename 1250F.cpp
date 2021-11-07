#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int j = n;
	int m = 2*(1+j);
	for(int i=1; i<=(int)sqrt(n); ++i, j=n/i)
	{
		if(n%j == 0)
			m = min(m, 2*(i+j));
	}
	cout << m;
}
