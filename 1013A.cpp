#include<bits/stdc++.h>
using namespace std;

string solve(int a1[], int a2[], int n)
{
	int s1 = accumulate(a1, a1+n, 0);
	int s2 = accumulate(a2, a2+n, 0);
	if(s1 >= s2)
		return "Yes";
	return "No";
}

int main()
{
	int n;
	cin >> n;
	int a1[n], a2[n];
	for(int i=0; i<n; i++)
		cin >> a1[i];
	for(int i=0; i<n; i++)
		cin >> a2[i];
	cout << solve(a1, a2, n);
}
