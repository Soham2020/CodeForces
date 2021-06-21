#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a1, a2, a3, b1, b2, b3, n, s1=0, s2=0;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> n;
	
	s1 = a1 + a2 + a3;
	s2 = b1 + b2 + b3;
	
	int a = (s1 + 5 - 1)/5;
	int b = (s2 + 10 - 1)/10;
	
	cout << (a+b<=n ? "YES" : "NO") << "\n";
	
}
