#include<bits/stdc++.h>

int main()
{
	int t;
	std::cin >> t;
	while(t--) 
	{
		int n;
		long long k;
		std::cin >> n >> k;
		std::vector<int> a(n);
		for(int i = 0; i < n; i++) 
		{
			std::cin >> a[i];
		}
		if(k > 1) {
			k = 2 + k % 2;
		}
		while(k--) {
			int mx = -1000000000;
			for(int i = 0; i < n; i++) 
			{
				mx = std::max(mx, a[i]);
			}
			for(int i = 0; i < n; i++) 
			{
				a[i] = mx - a[i];
			}
		}
		for(int i = 0; i < n; i++) 
		{
			std::cout << a[i] << (i + 1 == n ? '\n' : ' ');
		}
	}
}
