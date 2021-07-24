#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v;
	int k, n;
	cin >> n >> k;
	string s;
	cin >> s;
	for(int i=65; i<k+65; i++)
	{
		char ch = i;
		int c = count(s.begin(), s.end(), ch);
		v.push_back(c);
	}
	int m = *min_element(v.begin(), v.end());
	cout << m*k;
}
