#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	int res = (n*(n+1))/2;
	return res;
}

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	int t1 = 0, t2 = 0;
	int dif = abs(a - b);
	if(dif > 1)
	{
		int mid = (a+b)/2;
		t1 = sum(abs(mid - a));
		t2 = sum(abs(b - mid));
		cout << (t1+t2);
	}
	else
		cout << dif;
}
