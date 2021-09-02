#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = n/11;
	int it = count(s.begin(), s.end(), '8');
//	cout << it << "\n";
	if(it >= x)
		cout << x;
	else if(it < x)
		cout << it;
	else
		cout << 0;
}
