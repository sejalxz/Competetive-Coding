// HackerRank
// Time Conversion
// Problem Solving
// Author: sejalxz

#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string str;
    if (s[8] == 'A')
    {
        if (s.substr(0, 2) == "12")
        {
            str = s.substr(0, 8);
            str.replace(0, 2, "00");
        }
        else
        {
            str = s.substr(0, 8);
        }
    }
    else
    {
        string time[12] = {"12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"};
        if (s.substr(0, 2) != "12")
        {
            string temp = s.substr(0, 2);
            int num = stoi(temp);
            num += 12;
            str = s.substr(0, 8);
            str.replace(0, 2, to_string(num));
        }
        else
        {
            str = s.substr(0, 8);
        }
    }
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
