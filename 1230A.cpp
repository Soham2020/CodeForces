#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	if((a1+a2) == (a3+a4))
		cout << "yes";
	else if((a1+a3) == (a2+a4))
		cout << "yes";
	else if((a1+a4) == (a2+a3))
		cout << "yes";
	else if((a2+a3+a4) == (a1))
		cout << "yes";
	else if((a1+a3+a4) == (a2))
		cout << "yes";
	else if((a1+a2+a4) == (a3))
		cout << "yes";
	else if((a1+a2+a3) == (a4))
		cout << "yes";
	else
		cout << "no";
}
