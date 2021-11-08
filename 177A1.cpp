#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j, sum = 0;
	cin >> n;
	int a[n][n];
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    //main diagonal
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        sum+=a[i][j];
        a[i][j]=0;
    }

    //secondary diagonal
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        sum+=a[i][j];
        a[i][j]=0;
    }

    //mid row
    for(i=0;i<n;i++)
    {
        sum+=a[n/2][i];
        a[n/2][i]=0;
    }

    //mid column
    for(i=0;i<n;i++)
    {
        sum+=a[i][n/2];
        a[i][n/2]=0;
    }


    cout<<sum;
}
