// HackerEarth
// monk and rotation
// monk_and_rotation.cpp
// Author:sejalxz

#include <iostream>
using namespace std;

int main()
{

    int T, N, K, i;
    cin >> T;
    while (T)
    {
        cin >> N >> K;
        int arr[N];
        for (i = 0; i < N; i++)
            cin >> arr[i];

        K %= N;
        for (i = 0; i < N; i++)
        {
            cout << arr[(i + (N - K)) % N] << " ";
        }
        cout << "\n";
        T--;
    }

    return 0;
}
