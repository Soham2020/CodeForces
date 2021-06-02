#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	set <char> s(begin(a), end(a));
	n = s.size();
	if(n == 26)
		cout<<"YES";
	else
		cout<<"NO"; 
}
