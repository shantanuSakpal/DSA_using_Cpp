#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

//========================================

int32_t main()
{
    int x, n;
    n = 38;
    //========================================
    // find the 4th bit from left
    //  index :  543210
    //  number : 100110
    //  mask:    001000
    x = 1 << 3; // creating the mask
    int ans = n & x;
    if (ans == 0)
    {
        cout << "4th bit is 0";
    }
    else
    {
        cout << "4th bit is 1";
    }
    cout << endl;

    //========================================
    // to set the ith bit or to make  it 1
    //   index :  543210
    //   number : 100110
    //   mask:    001000
    ans = n | x;
    deb(ans);
    // ans is 46 which is 101110

    //========================================
    // to clear the ith bit or to make it zero
    //   index :  543210
    //   number : 100110
    //   mask:    111011
    x = ~(1 << 2);
    ans = n & x;
    deb(ans);
    // ans is 34 which is 100010

    //========================================
    
}