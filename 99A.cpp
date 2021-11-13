#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	string str;
	cin >> str;
	int dot = str.find('.');
	if(str[dot-1] == '9')
		cout << "GOTO Vasilisa.";
	else
	{
		if(str[dot+1] >= '5')
		{
			str[dot-1] += 1;
			for(int i=0; i<dot; i++)
				cout << str[i];
		}
		else
		{
			for(int i=0; i<dot; i++)
				cout << str[i];
		}
	}
}
