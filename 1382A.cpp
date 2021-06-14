#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		vector <int> v;
		
		for(int i=0; i<n; i++)
			cin >> a[i];
		for(int i=0; i<m; i++)
			cin >> b[i];
			
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(a[i] == b[j])
				{
					v.push_back(a[i]);
					break;
				}
			}
			if(v.size() == 1)
				break;
		}
		
		int size = v.size();
		if(size == 0)
			cout << "NO\n";
		else
		{
			cout<<"YES"<<endl;
            cout<<v.size()<<" ";
            for(int i=0; i<v.size(); i++)
			{
                cout<<v[i]<<endl;
            }
		}
	}
}
