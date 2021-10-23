// HackerEarth
// going_to_office.cpp
// Going to office
// Basic Programming
// Author: sejalxz

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long int D, Oc, Of, Od, Cs, Cb, Cm, Cd, Ot, Ct;
    cin >> D >> Oc >> Of >> Od >> Cs >> Cb >> Cm >> Cd;
    Ot = Oc + (D - Of) * Od;
    Ct = Cb + (D / Cs) * Cm + Cd * D;

    (Ot <= Ct) ? cout << "Online Taxi" : cout << "Classic Taxi";

    return 0;
}