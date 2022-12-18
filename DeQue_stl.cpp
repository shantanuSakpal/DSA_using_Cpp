#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    deque<int> d;
    d.push_back(4);
    d.push_front(2);
    d.push_back(23);
    d.push_back(23);
    d.push_back(34);
    d.push_back(217);
    cout << d[5] << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "is empty ? " << d.empty() << endl;

    cout << "size before ? " << d.size() << endl;
    d.pop_back();
    d.pop_front();
    cout << "size after ? " << d.size() << endl;
    return 0;
}