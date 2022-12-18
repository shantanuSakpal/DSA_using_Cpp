// CPP program to find 1's complement of n.
#include<bits/stdc++.h>
using namespace std;

unsigned int onesComplement(unsigned int n)
{
// Find number of bits in the given integer
int number_of_bits = floor(log2(n))+1;

// XOR the given integer with poe(2,
// number_of_bits-1 and print the result
return ((1 << number_of_bits) - 1) ^ n;
}

int main()
{
unsigned int n = 22;
cout << onesComplement(n);
return 0;
}
