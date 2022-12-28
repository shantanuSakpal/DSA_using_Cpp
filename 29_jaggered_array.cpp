// jaggered array has  unequal size of rows
//  eg
/*
x x x x x x
x x x x
x x
x x x x
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    int row;
    cout << "enter no of rows" << endl;
    cin >> row;
    int **arr = new int *[row];
    int *col = new int[row];
    for (int i = 0; i < row; i++)
    {

        cout << "enter no of ele of row num " << i + 1 << endl;
        cin >> col[i];
        arr[i] = new int[col[i]];
        cout << "enter ele of row num " << i + 1 << endl;
        for (int j = 0; j < col[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    // and output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}