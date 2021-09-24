//GFG
//Number of 1 bits
//number_of_1_bits.cpp
//Bit Manipulation
//Author: sejalxz

#include <iostream>
using namespace std;

int setBits(int N)
{
    // Write Your Code
    int count = 0;
    while (N > 0)
    {
        N = N & (N - 1);
        count++;
    }
    return count;
}

int main()
{
    int N;
    cin >> N;
    cout << setBits(N);
    return 0;
}
