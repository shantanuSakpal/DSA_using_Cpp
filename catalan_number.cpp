// Catalan numbers are defined as a mathematical sequence that consists of positive integers, which can be used to find the number of possibilities of various combinations. 

// The nth term in the sequence denoted Cn, is found in the following formula: (2n!)/((n + 1)! n!)            

// The nth Catalan number can be expressed directly in terms of binomial coefficients by

// The first Catalan numbers for n = 0, 1, 2, 3, ... are

// 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, ... (sequence A000108 in the OEIS).

#include <iostream>
using namespace std;
 
// A dynamic programming based function to find nth
// Catalan number
unsigned long int catalanDP(unsigned int n)
{
    // Table to store results of subproblems
    unsigned long int catalan[n + 1];
 
    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;
 
    // Fill entries in catalan[] using recursive formula
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
 
    // Return last entry
    return catalan[n];
}
 
// Driver code
int main()
{
    for (int i = 0; i < 10; i++)
        cout << catalanDP(i) << " ";
    return 0;
}
