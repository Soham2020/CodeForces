#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int solve(vector <int>& v, int k)
{
	int s = 0, c = 0; 
	for(int i=0; i<v.size(); i++)
	{
		s += v[i];
		if(s <= k)
		{
			c++;
			if(s == k)
				return c;
		}
		else
			break;
	}
	if(s > k)
		return (c+1);
	return -1;
}

int main()
{
	int k;
	cin >> k;
	vector <int> v(12);
	for(int i=0; i<12; i++)
		cin >> v[i];
	if(k == 0)
		cout << 0;
	else
	{
		sort(v.begin(), v.end(), greater <int>());
		cout << solve(v, k);
	}
}
