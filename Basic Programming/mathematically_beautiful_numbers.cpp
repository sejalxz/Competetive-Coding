// HackerEarth
// mathematically_beautiful_numbers.cpp
// Basics of Implementation
// Author: sejalxz
#include <iostream>
using namespace std;
int main()
{
    int t, k;
    long long int x;
    cin >> t;

    while (t > 0)
    {
        cin >> x >> k;
        while (x != 0)
        {
            if (x % k != 0)
            {
                x--;
                if (x % k != 0)
                {
                    cout << "NO\n";
                    break;
                }
                else
                {
                    x /= k;
                }
            }
            else
            {
                x /= k;
            }
            if (x == 0)
                cout << "YES\n";
        }
        t--;
    }

    return 0;
}