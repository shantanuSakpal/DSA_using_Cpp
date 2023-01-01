#include <bits/stdc++.h>
using namespace std;

/* inline function is
->Before compilation, "add" is replaced with the actual function code
->does not make a new function in stack, so no extra memory, no function call
->mostly one line, but may be two or three lines, compiler pe depend hai.
->greater than 3 lines nahi manega
->only a request , not a command
*/
inline int add(int &a, int &b)
{
    for (int i = 0; i < a; i++)
    {
        b++;
        }
    return (a + b);
}

int main()
{
    int x, n;
    int a = 1, b = 2;
    cout << (add(a, b));

    return 0;
}