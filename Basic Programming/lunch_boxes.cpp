// HackerEarth
// Lunch boxes
// Basic Programming
// Author: sejalxz

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t, N, M, i, schools;
    cin >> t;
    while (t > 0)
    {
        cin >> N >> M;
        long int A[M];

        for (i = 0; i < M; i++)
        {
            cin >> A[i];
        }
        sort(A, A + M);
        i = 0;
        schools = 0;
        while (N >= 0)
        {
            if ((N - A[i]) >= 0)
            {
                N = N - A[i];
                schools++;
            }
            else
                break;
            i++;
        }
        cout << schools << "\n";
        t--;
    }
    return 0;
}