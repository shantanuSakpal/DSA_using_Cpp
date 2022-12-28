// A C++ Program to find the longest common prefix
#include <bits/stdc++.h>
using namespace std;

// A Utility Function to find the common prefix between
// strings- str1 and str2
// string commonPrefixUtil(string str1, string str2)
// {
// 	string result;
// 	int n1 = str1.length(), n2 = str2.length();

// 	for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
// 	{
// 		if (str1[i] != str2[j])
// 			break;
// 		result.push_back(str1[i]);
// 	}
// 	return (result);
// }

// A Divide and Conquer based function to find the
// longest common prefix. This is similar to the
// merge sort technique
// string commonPrefix(string arr[], int low, int high)
// {
// 	if (low == high)
// 		return (arr[low]);

// 	if (high > low)
// 	{
// 		// Same as (low + high)/2, but avoids overflow for
// 		// large low and high
// 		int mid = low + (high - low) / 2;

// 		string str1 = commonPrefix(arr, low, mid);
// 		string str2 = commonPrefix(arr, mid+1, high);

// 		return (commonPrefixUtil(str1, str2));
// 	}
// }
string conquer(string s1, string s2)
{
    string res = "";
    int i = 0, j = 0;
    while (i < s1.length() && j < s2.length() && s1[i] == s2[j])
    {
        res.push_back(s1[i]);
        i++;
        j++;
    }
    return res;
}

string divideit(string arr[], int l, int h)
{
    int mid = l + (h - l) / 2;
    if (l == h)
        return arr[l];
    if (l < h)
    {
        string s1 = divideit(arr, l, mid);
        string s2 = divideit(arr, mid + 1, h);
        return conquer(s1, s2);
    }
}

// Driver program to test above function
int main()
{
    string arr[] = {"geeksforgeeks", "gdfeekads",
                    "geek", "geezer"};
    int n = sizeof(arr) / sizeof(arr[0]);

    string ans = divideit(arr, 0, n - 1);

    if (ans.length())
        cout << "The longest common prefix is "
             << ans;
    else
        cout << "There is no common prefix";
    return (0);
}
