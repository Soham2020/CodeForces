#include <bits/stdc++.h>
using namespace std;
#define N 100005

bool prime[N];
 
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    prime[1] = false;
 
    for (int p = 2; p * p < N; p++) {
        if (prime[p] == true) {
            for (int i = p * 2; i < N; i += p)
                prime[i] = false;
        }
    }
}

int almostPrimes(int n)
{
    int ans = 0;
 
    for (int i = 6; i <= n; i++) {
        int c = 0;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                if (j * j == i) {
                    if (prime[j])
                        c++;
                }
                else {
                    if (prime[j])
                        c++;
                    if (prime[i / j])
                        c++;
                }
            }
        }
 
        if (c == 2)
            ans++;
    }
    return ans;
}

int main()
{
	SieveOfEratosthenes();
	int n;
	cin >> n;
	cout << almostPrimes(n);
}
