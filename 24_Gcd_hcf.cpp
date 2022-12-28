/*
gcd(a,b)=gcd(a-b,b)=gcd(b,a%b)

Lcm(a,b)*gcd(a,b) = a*b
*/

#include <bits/stdc++.h>
using namespace std;

int findGCD(int x, int y)
{
    if (y > x)
    {
        findGCD(y, x);
    }
    if (y == 0)
    {
        return x;
    }
    else
    {
        findGCD(y, x % y);
    }
}
int main()
{
    int x, n;
    int ans = findGCD(1220, 516);
    cout << ans << endl;

    return 0;
}