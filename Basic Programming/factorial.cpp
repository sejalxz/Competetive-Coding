//factorial.cpp
//Factorial
//Basic Programming
//Author: sejalxz

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    long int factorial = 1;
    for (int i = N; i > 0; i--)
        factorial = factorial * i;

    cout << factorial;

    return 0;
}