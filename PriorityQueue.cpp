#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    // max heap,returns max element in heap whenever we pop
    priority_queue<int> maxq;

    // min heap,returns min element in heap whenever we pop
    priority_queue<int, vector<int>, greater<int>> minq;

    maxq.push(45);
    maxq.push(34);
    maxq.push(534);
    maxq.push(1);
    int n1 = maxq.size();
    for (int i = 0; i < n1; i++)
    {
        cout << maxq.top() << " ";
        maxq.pop();
    }
    cout << endl;
    minq.push(465);
    minq.push(3344);
    minq.push(53434);
    minq.push(1);
    int n2 = minq.size();
    for (int i = 0; i < n2; i++)
    {
        cout << minq.top() << " ";
        minq.pop();
    }

    return 0;
}