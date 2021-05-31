#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int l=0, u=0, e=0;
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
			u++;
		else if(str[i] >= 97 && str[i] <= 122)
			l++;
	}
	if(l > u)
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	else if(u > l)
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	else if(u == l)	
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout<<str;
}
