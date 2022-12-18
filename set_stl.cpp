#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    set<int> s;
    s.insert(45); // log (n)
    s.insert(4);
    s.insert(21);
    s.insert(5);
    s.insert(6);
    s.insert(45);
    set<int>::iterator it = s.begin();
    it++;
    // it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << ' ';
    }

    cout << "is 5 in set " << s.count(5) << endl;

    it = s.find(43); // it is set to the address where ele is found else it is set to the end
    cout << *it;

    return 0;
}