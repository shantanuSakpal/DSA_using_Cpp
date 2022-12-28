#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row;
    cin >> col;
    // int *a1 = new int[n]; // allocated n blocks whose first block address is stored in a1 pointer.

    int **a2 = new int *[row]; // created 1d array of size row having pointers of type int *

    for (int i = 0; i < row; i++)
    {
        a2[i] = new int[col]; // allocate n blocks to each of the pointers of a2
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a2[i][j];
        }
    }
    // and output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }
    // free memory of blocks assigned to each pointer in a2 array
    for (int i = 0; i < row; i++)
    {
        delete[] a2[i];
    }
    // free the pointer array a2 of number of rows
    delete[] a2;

    return 0;
}