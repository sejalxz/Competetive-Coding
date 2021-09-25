// HackerEarth
// Toggle String
// toggle_string.cpp
// Basic Programming
// Author: sejalxz

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    string str, ans;
    getline(cin, str);

    for (long long int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
            {
                ans += toupper(str[i]);
            }
            else
            {
                ans += tolower(str[i]);
            }
        }
        else
        {
            ans += str[i];
        }
    }
    cout << ans;
    return 0;
}
