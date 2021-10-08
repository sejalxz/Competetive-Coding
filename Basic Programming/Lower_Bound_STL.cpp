// HacherRank
// Lower Bound STL
// STL
// Author:sejalxz

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int N, Q;
    cin >> N;
    long long int element, index;
    vector<int> v;
    for (long int i = 0; i < N; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    cin >> Q;
    for (long int i = 0; i < Q; i++)
    {
        cin >> element;
        auto index = lower_bound(v.begin(), v.end(), element);
        if (*(index + 1) == element || *index == element)
            cout << "Yes " << index - v.begin() + 1 << endl;
        else
            cout << "No " << index - v.begin() + 1 << endl;
    }
    return 0;
}
