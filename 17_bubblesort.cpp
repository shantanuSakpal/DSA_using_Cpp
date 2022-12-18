#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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
    int arr[] = {2, 3, 6, 5, 1, 9, 7, 10};
    n = sizeof(arr) / sizeof(int);
    BubbleSort(arr, n);
    display(arr, n);
    return 0;

    return 0;
}