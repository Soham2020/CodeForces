#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j, c = 0;
	cin >> n;
	char s[n][5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>s[i][j];
        }
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            if(c == 0)
            {
            	if((s[i][j] == 'O') && (s[i][j+1] == 'O'))
            	{
            		s[i][j] = '+';
            		s[i][j+1] = '+';
            		c += 1;
            		break;
				}
			}
        }
    }
    
    if(c == 0)
    	cout << "NO\n";
    else
	{
		cout << "YES\n";
	    for(i=0; i<n; i++)
	    {
	        for(j=0; j<5; j++)
	        {
	        	cout<<s[i][j];
	        }
	        cout<<endl;
	    }
	}
}
