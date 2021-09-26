// Hackerrank
// Ice Cream Parlor
// ice_cream_parlor.cpp
// Basic Programming
// Author: sejalxz

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int money, n, i, j, k;
    int arr[2];
    for (k = 0; k < t; k++)
    {
        cin >> money; //4
        cin >> n;     // 5
        long long int cost[n];
        for (i = 0; i < n; i++)
        {
            cin >> cost[i]; // 1 4 5 3 2
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (money == cost[i] + cost[j])
                {
                    if (i < j)
                    {
                        arr[0] = i + 1, arr[1] = j + 1;
                    }
                    else
                    {
                        arr[0] = j + 1, arr[1] = i + 1;
                    }
                    goto print;
                }
            }
        }
    print:
        for (auto x : arr)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}