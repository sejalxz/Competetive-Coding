// HackerEarth
// Divisible
// divisible.cpp
// Basic Programming
// Author: sejalxz

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    string str;
    long long int N, i, sum, so = 0, se = 0;
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> str;
        if (i < N / 2)
            i & 1 ? so += str[0] - '0' : se += str[0] - '0';
        else
            i & 1 ? so += str.back() - '0' : se += str.back() - '0';
    }
    sum = abs(so - se);
    (sum == 0 or sum % 11 == 0) ? cout << "OUI" : cout << "NON";

    return 0;
}