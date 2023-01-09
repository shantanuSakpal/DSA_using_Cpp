#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    int m = *max_element(arr, arr + n);
    int freqArr[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        freqArr[arr[i]]++;
    }
    int k = 0;
    for (int i = 0; i <= m; i++)
    {
        while (freqArr[i] != 0)
        {
            arr[k] = i;
            k++;
            freqArr[i]--;
        }
    }
}

void display(int arr[], int n)
{
    cout << "Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int x, n;
    int arr[] = {6, 5, 3, 1, 6, 23, 7};
    n = sizeof(arr) / sizeof(int);
    cout << "before sort ";
    display(arr, n);
    countSort(arr, n);
    cout << "after sort ";
    display(arr, n);

    return 0;
}