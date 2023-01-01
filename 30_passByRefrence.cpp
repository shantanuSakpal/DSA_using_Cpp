#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pp(x) cout << x << "\n"
#define py cout << "YES" \
                << "\n"
#define pn cout << "NO" \
                << "\n"
#define deb(x) cout << #x << "=" << x << endl
//========================================
int add(int &n, int &m) // same address different address
{
    n++;
    return (n + m);
}

int addArr(int *arr, int n)
// address of first element of array is passed
//  same as (int arr[],int n)
{
    arr[0]++;
    return (arr[0] + arr[1]);
}
int main()
{
    int x, n;
    int a = 10, b = 9;
    int arr[] = {2, 3};
    n = 2;
    int ans = add(a, b);
    int ans2 = addArr(arr, n);
    cout << a << " " << b << endl;
    cout << arr[0] << " " << arr[1] << endl;
    deb(ans);
    deb(ans2);

    return 0;
}