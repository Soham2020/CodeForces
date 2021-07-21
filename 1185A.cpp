#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[3], d;
	for(int i=0; i<3; i++)
		cin >> a[i];
	cin >> d;
	sort(a, a+3);
	int c = 0;
	if(a[1] - a[0] < d)
		c = c + d - (a[1]-a[0]);
	if (a[2]-a[1] < d)
		c = c + d - (a[2]-a[1]);
	cout << c;
}
