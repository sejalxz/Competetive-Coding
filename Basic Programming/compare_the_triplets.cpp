// HackerRank
// Compare the triplets
// Author: sejalxz

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[3], b[3], marks[2] = {0, 0};

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            marks[0]++;
        }
        else if (b[i] > a[i])
        {
            marks[1]++;
        }
    }

    cout << marks[0] << " " << marks[1] << "\n";

    return 0;
}
