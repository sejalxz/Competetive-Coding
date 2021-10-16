// HackerEarth
// Divisible
// divisible.cpp
// Basic Programming
// Author: sejalxz

#include <iostream>
#include <math.h>

using namespace std;

int first_digit(long long int X)
{
    while (X > 9)
    {
        X = X / 10;
    }
    return X;
}
int main()
{
    long long int N, i, j, sum = 0ll;
    cin >> N;
    long long int Arr[N];
    long long int A[N / 2];
    long long int B[N / 2];

    for (i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    j = N / 2;
    for (i = 0; i < N / 2; i++)
    {
        A[i] = Arr[i];
        B[i] = Arr[j++];
    }

    for (i = 0; i < N / 2; i++)
    {
        sum += (first_digit(A[i])) * pow(10, N - i - 1);
    }

    for (i = 0; i < N / 2; i++)
    {
        sum += (B[i] % 10) * pow(10, N / 2 - i - 1);
    }

    if (sum % 11 == 0)
        cout << "OUI";
    else
        cout << "NON";
    return 0;
}

//Solution 2

// #include <iostream>
// #include <sstream>
// #include <string>

// using namespace std;
// int main()
// {
//     long long int N, i, sum;
//     cin >> N;

//     string Arr[N];
//     string str_sum;

//     for (i = 0; i < N; i++)
//     {
//         cin >> Arr[i];
//         if (i < (N / 2))
//             str_sum = str_sum + Arr[i].at(0);
//         else
//             str_sum += Arr[i].at(Arr[i].length() - 1);
//     }

//     stringstream ss(str_sum);
//     ss >> sum;

//     if (sum % 11 == 0)
//         cout << "OUI";
//     else
//         cout << "NON";
//     return 0;
// }