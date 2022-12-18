//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[27] = {0};
        for (int i = 0; i < str.length(); i++)
        {
            arr[str[i] - 97]++;
        }
        int maxfreq = 0;
        string ans = "";
        for (int i = 0; i < 27; i++)
        {

            if (arr[i] > maxfreq)
            {
                maxfreq = arr[i];
            }
        }
        for (int i = 0; i < 27; i++)
        {
            if (arr[i] == maxfreq)
            {
                char temp = (char)(97 + i);
                ans.push_back(temp);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[0];
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