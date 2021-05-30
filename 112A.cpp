#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum1=0, sum2=0;
	string str1, str2;
	cin>>str1;
	cin>>str2;
	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
	for(int i=0; str1[i]!='\0'; i++)
	{
		sum1 += str1[i];
	}
	for(int i=0; str2[i]!='\0'; i++)
	{
		sum2 += str2[i];
	}
	if(str1 < str2)
		cout<<-1<<"\n";
	else if(str2 < str1)
		cout<<1<<"\n";
	else 
		cout<<0<<"\n";
}
