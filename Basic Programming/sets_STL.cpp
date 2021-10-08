// HacherRank
// Set STL
// STL
// Author:sejalxz

#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    long int Q;
    int y;
    long long int x;
    cin >> Q;
    set<int> s;
    for (long int i = 0; i < Q; i++)
    {
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            s.erase(x);
        }
        else
        {
            if (s.find(x) != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
