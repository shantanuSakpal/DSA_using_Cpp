//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char sortm(map<char, int> &M)
    {

        // Declare a multimap
        multimap<int, char> MM;

        // Insert every (key-value) pairs from
        // map M to multimap MM as (value-key)
        // pairs
        for (auto &it : M)
        {
            MM.insert({it.second, it.first});
        }

        // Print the multimap
        for (auto &it : MM)
        {
            cout << it.first << ' '
                 << it.second << endl;
        }
        map<int, char>::iterator it = MM.begin();
        it = MM.rbegin();
        int freq = it->first;
        cout << freq;
        while (it->first == freq)
        {
            it--;
        }
        it++;
        return it->second;
    }
    char getMaxOccuringChar(string str)
    {
        map<char, int> m;
        for (int i = 0; i < str.length(); i++)
        {
            m[str[i]]++;
        }
        return sortm(m);
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
    }
}
// } Driver Code Ends