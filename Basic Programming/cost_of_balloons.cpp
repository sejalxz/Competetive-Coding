//cost_of_balloons.cpp
//Cost of balloons
//Basic Programming
//Author: sejalxz

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, m, p, x, y;
    cin >> t;
    long int ans[t];
    long int costA, costB;

    for (int i = 0; i < t; i++)
    {
        ans[i] = 0;
        x = y = 0;
        cin >> n >> m;
        cin >> p;
        int solved_problem[p][2];
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k <= 1; k++)
            {
                cin >> solved_problem[j][k];
            }
            if (solved_problem[j][0] == 1)
                x++;

            if (solved_problem[j][1] == 1)
                y++;
        }
        costA = x * n + y * m;
        costB = x * m + y * n;

        if (costA < costB)
            ans[i] = costA;
        else
            ans[i] = costB;
    }

    for (int i = 0; i < t; i++)
        cout << ans[i] << endl;

    return 0;
}