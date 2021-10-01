// HackerRank
// Plus Minus
// Problem Solving
// Author: sejalxz

#include <iostream>
#include <limits>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int neg = 0, pos = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }
    cout.precision(6);
    cout << pos / ((float)n) << endl;
    cout << neg / ((float)n) << endl;
    cout << zero / ((float)n) << endl;

    return 0;
}