// HackerEarth
// Anti-Palindrome strings
// Basic Programming
// Author: sejalxz

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, revs;

    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        revs = s;
        reverse(revs.begin(), revs.end());
        if (revs == s)
        {
            sort(revs.begin(), revs.end());
            cout << "-1\n";
        }
        else
        {
            sort(revs.begin(), revs.end());
            cout << revs << "\n";
        }
    }
    return 0;
}