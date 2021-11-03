#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, d;
	cin >> m >> d;
	if(m <= 7 && m%2 != 0)
	{
		if(d >= 6)
		{
			cout << 6;
			return 0;
		}
		else
		{
			cout << 5;
			return 0;
		}
	}
	if(m <= 7 && m%2 == 0)
	{
		if(m == 2)
		{
			if(d == 1)
			{
				cout << 4;
				return 0;
			}
			else
			{
				cout << 5;
				return 0;
			}
		}
		else
		{
			if(d == 7)
			{
				cout << 6;
				return 0;
			}
			else
			{
				cout << 5;
				return 0;
			}
		}
	}
	if(m > 7 && m%2 == 0)
	{
		if(d >= 6)
		{
			cout << 6;
			return 0;
		}
		else
		{
			cout << 5;
			return 0;
		}
	}
	if(m > 7 && m%2 != 0)
	{
		if(d == 7)
		{
			cout << 6;
			return 0;
		}
		else
		{
			cout << 5;
			return 0;
		}
	}
}
