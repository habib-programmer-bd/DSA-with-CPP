#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student* hacib= new Student(9, 9, 4.3);
    return hacib;
}
int main()
{
    Student *p = fun();
    cout << p->cls << " " << p->roll << " " << p->gpa << endl;
    return 0;
}