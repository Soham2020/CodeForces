#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ra = max(3*a/10, a-(a/250)*c);
	int rb = max(3*b/10, b-(b/250)*d);
	if(ra > rb)
		cout << "Misha";
	else if(ra == rb)
		cout << "Tie";
	else
		cout << "Vasya";
}
