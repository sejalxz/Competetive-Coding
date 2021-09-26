// Hackerrank
// Min Max Sum
// min_max_sum.cpp
// Basic Programming
// Author: sejalxz

void miniMaxSum(vector<int> arr)
{
    long long min, max, sum = 0;
    min = *min_element(arr.begin(), arr.end());
    max = *max_element(arr.begin(), arr.end());
    for (auto x : arr)
        sum += x;
    cout << sum - max << " " << sum - min;
}
