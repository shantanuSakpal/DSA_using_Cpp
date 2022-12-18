#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{

    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int temp = arr[i];
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        j++;
        arr[j] = temp;
        i++;
    }
}

void display(int *arr, int n)
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
    int x;
    int arr[] = {8, 5, 3, 9, 7, 5, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    InsertionSort(arr, n);
    display(arr, n);

    return 0;
}