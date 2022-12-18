#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int x, n;
    // x = 5 ^ 5; // xor with same number is zero
    // cout << x<<"\n";
    // x=7^0;      //xor with zero is the same number
    // cout<<x;

    // //question 01 - non-repeating digit
    //     int res=0;
    // int arr[]={n,6,7,6,8,9,9};
    // for(int i=0;i<7;i++)
    // {
    //     res=res^arr[i];
    // }
    // cout<<res<<endl;

    //------------------------------------------------------------------>
    // // question 02 - 2 non-repeating digit
    // int res = 0;
    // int n=8;
    // int arr[] = {8,8,9,9,4,4,7,11};
    // for (int i = 0; i < n; i++)
    // {
    //     res = res ^ arr[i];
    // }
    // int temp = res;
    // int setbit=temp & ~(temp-1); //find the rightmost set bit
    // for (int i = 0; i < n; i++)
    // {
    //     if (setbit & arr[i])     //check if the  bit is 1 or 0
    //         temp = temp ^ arr[i];
    // }
    // int a = temp;
    // int b = res ^ temp;
    // cout << a << " " << b;

    //------------------------------------------------------------------>
    // question 03- 1 non repeating num when ever num repeats twice
    int arr[] = {8, 8, 8, 9, 9, 9, 4, 4, 4, 7};
    

    return 0;
}
