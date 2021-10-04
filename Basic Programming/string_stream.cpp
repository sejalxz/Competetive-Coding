// HackerRank
// String Stream
// Strings
// Author: sejalxz

#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> parseInts(string str)
{
    long int n, i, num;
    n = count(str.begin(), str.end(), ',') + 1;
    vector<int> v;
    char ch;
    stringstream ss(str);
    for (i = 0; i < n; i++)
    {
        ss >> num >> ch;
        v.push_back(num);
    }
    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
