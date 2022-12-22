// Given an integer n, return the number of prime numbers that
// are strictly less than n.
/*
iteratively marking as not prime all the multiples of each prime, starting with the first prime number, 2.

Time Complexity: O(N log(logN))
Space Complexity: O(N)
*/
#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i * 2; j < n; j += i)
            {
                prime[j] = false;
            }
            cout << i << " ";
        }
    }
    return count;
}

int main()
{
    int x, n;
    cin >> n;
    countPrimes(n);
    return 0;
}
