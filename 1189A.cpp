#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c0 = count(s.begin(), s.end(), '0');
	int c1 = count(s.begin(), s.end(), '1');
	if(c0 == c1)
	{
		if(n > 1)
		{
			vector <char> v1;
			vector <char> v2;
			for(int i=0; i<n/2; i++)
			{
				v1.push_back(s[i]);
			}
			for(int i=n/2; i<n; i++)
			{
				v2.push_back(s[i]);
			}
	//		for(auto x:v1)
	//			cout << x << " ";
	//		cout << endl;
	//		for(auto x:v2)
	//			cout << x << " ";
			int a0 = count(v1.begin(), v1.end(), '0');
			int a1 = count(v1.begin(), v1.end(), '1');
			int b0 = count(v2.begin(), v2.end(), '0');
			int b1 = count(v2.begin(), v2.end(), '1');
			while((a0 == a1) && (b0 == b1))
			{
				v1.push_back(v2[0]);
				vector<char>::iterator it;
				it = v2.begin();
				v2.erase(it);
				a0 = count(v1.begin(), v1.end(), '0');
				a1 = count(v1.begin(), v1.end(), '1');
				b0 = count(v2.begin()+1, v2.end(), '0');
				b1 = count(v2.begin()+1, v2.end(), '1');			
			}
			cout << 2 << "\n";
			for(auto x:v1)
				cout << x;
			cout << " ";
			for(auto x:v2)
				cout << x;
		}
		else
		{
			cout << 1 << "\n";
			cout << s[0];
		}
	}
	else
	{
		cout << 1 << "\n";
		for(auto x:s)
			cout << x;
	}
}
