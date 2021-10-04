// HackerRank
// String Stream
// Strings
// Author: sejalxz

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int n, q, i, j, size, l, s, t;
    long int *ptr = nullptr, *ans = nullptr;
    cin >> n >> q;
    long int *a[n];
    for (j = 0; j < n; j++)
    {
        cin >> size;
        ptr = new long int[size];
        for (i = 0; i < size; i++)
        {
            cin >> ptr[i];
        }
        a[j] = ptr;
    }

    for (l = 0; l < q; l++)
    {
        cin >> i;
        cin >> j;
        ans = a[i];
        cout << ans[j] << endl;
    }

    return 0;
}
