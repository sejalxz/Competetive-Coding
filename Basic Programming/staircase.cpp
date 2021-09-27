// HackerRank
// Staircase
// staircase.cpp
// Basic Programming
// Author: sejalxz

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, j, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (k = n - i; k >= 1; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
