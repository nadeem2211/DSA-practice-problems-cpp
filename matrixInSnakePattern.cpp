/*
Example 1:
Input: M = 4, N = 4 ,
array[M][N] = { {10, 20, 30, 40},
                {15, 25, 35, 45},
                {27, 29, 37, 48},
                {32, 33, 39, 50}};
Output:
10, 20, 30, 40, 45, 35, 25, 15,
27, 29, 37, 48, 50, 39, 33, 32
Explanation: Printing the matrix in a snake pattern.

Example 2:
Input: M = 3, N = 3 , array[M][N] = { {1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

Output: 1, 2, 3, 6, 5, 4, 7, 8, 9
Explanation: Printing the matrix in a snake pattern.
*/
//#include <bits/stdc++.h>
#include <iostream>
//#include <vector>
using namespace std;
#define m 4
int main()
{
    int ind = 0;
    int arr[m][m] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};

    for (int i = 0; i < m; i++)
    {
        if (ind == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
                ind = j;
            }
        }
        else if (ind == m - 1)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
                ind = j;
            }
        }
    }

    return 0;
}
