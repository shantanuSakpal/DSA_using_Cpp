#include <bits/stdc++.h>
using namespace std;

void selecionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    selecionSort(arr, n);
    display(arr, n);
    return 0;
}