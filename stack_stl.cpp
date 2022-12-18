#include <bits/stdc++.h>
using namespace std;

void display(stack<int> &st)
{
    cout << "size of stack : " << st.size() << endl;
}

int main()
{
    int x, n;
    stack<int> st;
    stack<int> s2;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    s2.push(56);
    s2.push(34);
    s2.push(3);
    s2.push(23);
    s2.push(64);
    display(st);
    // st.swap(s2);
    n = st.size();
    for (int i = 0; i < n; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}