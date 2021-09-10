#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int c2 = n - 10;
	if(c2 == 0)
		cout << 0;
	else if(c2>=1 && c2<=9)
		cout << 4;
	else if(c2 == 10)
		cout << 15;
	else if(c2 == 11)
		cout << 4;
	else
		cout << 0;
}
