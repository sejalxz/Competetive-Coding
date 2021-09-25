// HackerEarth
// Roy and Profile Picture
// roy_and_profile_picture.cpp
// Basic Programming
// Author: sejalxz

#include <iostream>

using namespace std;

int main()
{
    int N;
    long int L, W, H;
    cin >> L >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> W >> H;
        if (W < L || H < L)
            cout << "UPLOAD ANOTHER" << endl;
        else if (W == H)
            cout << "ACCEPTED" << endl;
        else
            cout << "CROP IT" << endl;
    }
    return 0;
}