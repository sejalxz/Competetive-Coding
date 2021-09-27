// HackerRank
// Birthday Cake Candles
// Basic Programming
// Author: sejalxz

#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
    int &tallest = *max_element(candles.begin(), candles.end());
    return count(candles.begin(), candles.end(), tallest);
}

int main()
{
    long int n;
    long long int x;
    cin >> n;
    vector<int> candles;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        candles.push_back(x);
    }
    cout << birthdayCakeCandles(candles);
    return 0;
}