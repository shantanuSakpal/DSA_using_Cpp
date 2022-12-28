#include <bits/stdc++.h>
using namespace std;
#define x1 , 1
#define x2 x1, x1
#define x4 x2, x2
#define x8 x4, x4

void print(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int insert(int *arr, int size, int element, int capacity, int index)
{
    // code for Insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int findDuplicate(int arr[], int n)
{
    int maxEle = max(*arr, *arr + n);
    int temp[maxEle] = {0};
    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
        if (temp[arr[i]] == 2)
        {
            return arr[i];
        }
    }
    return -1;
}

void arrayIntersection(int *arrA, int *arrB, int n1, int n2)
{
    vector<int> ansArr;
    // find freq of all elements
    int maxEle = max(*arrA, *arrA + n1);
    int freq[maxEle] = {0};
    cout << "max  element is : " << maxEle << endl;
    for (int i = 0; i < n1; i++)
    {
        freq[arrA[i]]++;
    }

    for (int i = 0; i < n2; i++)
    {
        if (freq[arrB[i]] > 0)
        {
            ansArr.push_back(arrB[i]);
        }
    }
    for (int i = 0; i < ansArr.size(); i++)
    {
        cout << ansArr[i] << " ";
    }
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6};
    // int arrA[] = {3, 2, 6, 8, 5, 8, 5, 4};
    // int arrB[] = {4, 9, 0, 3, 6, 9};
    // int n1 = sizeof(arrA) / sizeof(int);
    // int n2 = sizeof(arrB) / sizeof(int);
    // // reverse(arr, n);
    // // swapAlternate(arr, n);
    // // cout << "duplicate is : ";
    // // int ans = findDuplicate(arr, n);
    // // (ans < 0 ? cout << "not found" : cout << ans);
    // arrayIntersection(arrA, arrB, n1, n2);
    // cout << *(arr + 1);
    // int *ptr = &arr[0];
    // cout << sizeof(ptr) << endl;
    char temp = 'a';
    char *pr = &temp;
    cout << pr;

    // print(n1, &ansArr);
    return 0;
}