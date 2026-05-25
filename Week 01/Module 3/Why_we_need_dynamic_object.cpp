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
Student* fun()
{
    Student hacib(9, 9, 4.3);
    Student* p = &hacib; 
    return p;
}
int main()
{
    // Student habib(2, 9, 3.24);
    Student* p = fun();
    // cout << habib.cls << " " << habib.roll << " " << habib.gpa << endl;
    cout << p->cls << " " << p->roll << " " << p->gpa << endl;
    return 0;
}