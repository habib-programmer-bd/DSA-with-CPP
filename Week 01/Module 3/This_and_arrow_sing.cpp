#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, double gpa)
    {
        this->cls = cls; // This keyworld and arrow sing,,,,akoi name varable rakle akti bilting keyworld use korte hoy,ai ta (this) keywoeld ta (class) ar pointer hisabe kaj kore ,,direfarence kore..
        this->roll = roll;
        this->gpa = gpa;
    }
};

int main()
{
    Student a(2, 4, 1.25);
    cout << a.cls << " " << a.roll << " " << a.gpa << endl;
    return 0;
}