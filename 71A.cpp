#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string w;
		cin>>w;
		if(w.length() <= 10)
			cout<< w <<"\n";
		else
		{
			string::iterator it = w.begin();
			cout<<*it;
			cout<<w.length() - 2;
			string::iterator i = w.end() - 1;
			cout<<*i<<"\n";
		}
 	}	
}
