#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=1; i<=n; i++)
		cin>>a[i];
		
	int b[n];
	for(int i=1; i<=n; i++)
		b[i] = a[i];
		
	sort(b+1, b+n+1);
//	for(int i=1; i<=n; i++)
//		cout<<b[i]<<" ";
	for (int i = 1; i <= n; i++) {
        if (a[i] != b[2]) {
            cout << i + 1 << "\n";
        }
    }
	
}
