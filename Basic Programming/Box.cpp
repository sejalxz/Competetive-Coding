// HackerRank
// Classes And Objects
// Classes
// Author: sejalxz

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box
{
private:
    long int l, b, h;

public:
    //Default Constructor
    Box()
    {
        l = 0, b = 0, h = 0;
    }
    //Parameterized Constructor
    Box(long int l, long int b, long int h)
    {
        this->l = l, this->b = b, this->h = h;
    }
    //Copy Constructor
    Box(const Box &B)
    {
        l = B.l, b = B.b, h = B.h;
    }

    //Overload < operator
    bool operator<(Box const &B)
    {
        if (this->l < B.l)
            return true;
        else if (this->b < B.b && this->l == B.l)
            return true;
        else if (this->h < B.h && this->b == B.b && this->l == B.l)
            return true;
        else
            return false;
    }

    //Overload << operator
    friend ostream &operator<<(ostream &out, const Box &B);

    long int getLength()
    {
        return this->l;
    }
    long int getBength()
    {
        return this->b;
    }

    long int getHeight()
    {
        return this->h;
    }
    long long CalculateVolume()
    {
        return this->l * this->b * this->h;
    }
};

ostream &operator<<(ostream &out, const Box &B)
{
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

int main()
{
    int type, n;
    Box temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }

        if (type == 5)
        {
            Box Newbox(temp);
            cout << Newbox << endl;
        }
    }
    return 0;
}
