#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x, y, z, t1, t2, t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;
	// By Stairs
	int ts = t1 * abs(x-y);
	// By Elevator
	int te1, te2, te;
	if(z != x)
	{
		te1 = t2 * abs(z - x) + t3;
		te2 = t2 * abs(x - y) + (2 * t3);
		te = te1 + te2;
	}
	else
	{
		te1 = t3;
		te2 = t2 * abs(x - y) + (2 * t3);
		te = te1 + te2;
	}
	if(te <= ts)
		cout << "YES";
	else
		cout << "NO";
}
