// HackerRank
// Classes And Objects
// Classes
// Author: sejalxz

#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

class Student
{
private:
    int marks[5];

public:
    void input();
    int calculateTotalScore();
};

void Student ::input()
{
    for (int i = 0; i < 5; i++)
        cin >> marks[i];
}

int Student ::calculateTotalScore()
{
    int score = accumulate(marks, marks + 5, 0);
    return score;
}

int main()
{
    int n;
    cin >> n;

    Student *obj_student = new Student[n];
    for (int i = 0; i < n; i++)
    {
        obj_student[i].input();
    }
    int kristen_total_score = obj_student[0].calculateTotalScore();

    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (obj_student[i].calculateTotalScore() > kristen_total_score)
            count++;
    }

    cout << count;
    return 0;
}
