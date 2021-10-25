// HackerEarth
// Supernatural
// Author: sejalxz

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, count = 0, j, x, y;
    bool flag;
    cin >> n;

    if (n == 2)
    {
        cout << 1;
        goto exit;
    }

    if (isPrime(n))
    {
        cout << count;
        goto exit;
    }

    for (int i = 1; i <= 1000000; i++)
    {
        j = i;
        y = 1;
        flag = 1;
        while (j)
        {
            x = j % 10;
            if (x < 2)
            {
                flag = 0;
                break;
            }
            else
            {
                y *= x;
            }
            j /= 10;
        }
        if (y == n && flag)
            count++;
    }

    cout << count << "\n";
exit:
    return 0;
}
