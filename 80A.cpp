#include <bits/stdc++.h>
using namespace std;

int findNextPrime(int n);   
bool isPrime(int n);       

int main()
{
    int n, m;
    cin >> n >> m;
	int r = findNextPrime(n);
	if(r == m)
		cout << "YES";
	else
    	cout << "NO";
}

int findNextPrime(int n)
{
    int nextPrime = n;
    bool found = false;

    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }

    return nextPrime;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)     
            return false;
    }

    return true;
}
