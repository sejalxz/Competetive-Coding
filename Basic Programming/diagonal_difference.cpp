// HackerRank
// Pointers
// Problem Solving
// Author: sejalxz

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int leftd, rightd;
    leftd = rightd = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                leftd += arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
                rightd += arr[i][j];
        }
    }

    cout << abs(leftd - rightd);
    return 0;
}
