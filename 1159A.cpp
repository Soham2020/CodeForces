#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int m = 0;
    int a = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '+')
            m++;
        else
            m--;
        a = max(a, m);
    }
    cout << a;
}
