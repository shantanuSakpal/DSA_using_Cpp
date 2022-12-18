#include <bits/stdc++.h>
using namespace std;

void display(list<int> &l)
{
    l.push_back(123);
    cout << "size of list : " << l.size() << endl;
    ;
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    int x, n;
    // most functions same as deque.
    list<int> l;
    l.push_back(34);
    l.push_front(43);
    l.push_back(564);
    l.push_front(342);
    display(l);

    return 0;
}