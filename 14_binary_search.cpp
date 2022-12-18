#include <bits/stdc++.h>
using namespace std;

int SquareRootInt(int num)
{
    int l = 1;
    int r = num;
    int mid = l + (r - l) / 2;
    int ans = -1;

    while (l <= r)
    {
        long long int temp = mid * mid;
        if (temp == num)
        {
            return mid;
        }
        if (temp < num)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        mid = l + (r - l) / 2;
    }
    return ans;
}

double precisionSquare(int num, int intAns, int precision)
{
    double decimal = 1;
    double ans = intAns;
    for (int i = 0; i < precision; i++)
    {
        decimal = decimal / 10;
        double j = intAns;
        while (j * j < num)
        {
            ans = j;
            j += decimal;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << precisionSquare(n, SquareRootInt(n), 5);

    return 0;
}