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

    while (X > 0)
    {
        if (X == 10)
            return 1;

        if (X / 10 == 0)
        {
            break;
        }
        X = X / 10;
    }
    return X;
}
int main()
{
    long long int N, i, j, sum = 0;
    cin >> N;
    long long int Arr[N];
    long long int A[N / 2];
    long long int B[N / 2];

    for (i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    for (i = 0; i < N / 2; i++)
    {
        A[i] = Arr[i];
    }

    for (i = 0, j = N / 2; i < N / 2; i++)
    {
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