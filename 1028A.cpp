#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m;
	scanf("%lld%lld",&n,&m);
	char grid[n+1][m+1];
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			cin>>grid[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(grid[i][j]!='B')
				continue ;
			ll lft=0,rgt=0,up=0,down=0;
			int k=i;
			while(k>0){
				if(grid[k][j]!='B'){
					break;
				}
				up++;
				k--;
			}
			k=i;
			while(k<=n){
				if(grid[k][j]!='B'){
					break;
				}
				
				down++;
				k++;
			}
			k=j;
			while(k>0){
				if(grid[i][k]!='B')
					break;
				k--;
				lft++;
			}
			k=j;
			while(k<=m){
				if(grid[i][k]!='B')
					break;
				k++;
				rgt++;
			}
			if(lft==rgt && rgt==up && up==down){
				printf("%d %d\n",i,j);
				return 0;
			}
		}
	}
}
