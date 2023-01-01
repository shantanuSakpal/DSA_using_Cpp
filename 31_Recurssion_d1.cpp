#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1; // base condition/case
    // someprocessing part
    return n * factorial(n - 1); // recurssion relation
}

int powerOf2(int n)
{
    if (n == 0)
        return 1;
    return 2 * powerOf2(n - 1); // tail recurssion
}

void printNum(int n)
{
    if (n == 0)
        return;
    printNum(n - 1); // head recurssion
    cout << n << " ";
}

int main()
{
    int x, n;
    cin >> n;
    // cout << factorial(n);
    // cout << powerOf2(n);
    printNum(n);
    return 0;
}