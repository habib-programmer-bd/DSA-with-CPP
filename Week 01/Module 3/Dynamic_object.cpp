#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double gpa;

    Student(int c, int r, double g)   // Ai funtion ti hocce constuctor function..(sotcute);
    {
        cls = c;
        roll = r;
        gpa = g;
    }
};

int main()
{
    Student a(2, 4, 1.25);
    Student* hacib =  new Student(10,4,3.5);
    cout << hacib->cls << " " << hacib->roll << " " << hacib->gpa << endl;
    return 0;
}