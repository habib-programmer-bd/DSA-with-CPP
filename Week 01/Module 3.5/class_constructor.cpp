#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    string name1, name2, name3;
    int roll1, roll2, roll3;
    char section1, section2, section3;
    int mark1, mark2, mark3;
    int cls1, cls2, cls3;

    cin >> name1 >> roll1 >> section1 >> mark1 >> cls1;
    cin >> name2 >> roll2 >> section2 >> mark2 >> cls2;
    cin >> name3 >> roll3 >> section3 >> mark3 >> cls3;

    Student habib(name1, roll1, section1, mark1, cls1);
    Student hacib(name2, roll2, section2, mark2, cls2);
    Student mahira(name3, roll3, section3, mark3, cls3);

    if (habib.math_marks > hacib.math_marks && habib.math_marks > mahira.math_marks)
    {
        cout << habib.name << endl;
    }
    else if (hacib.math_marks > habib.math_marks && hacib.math_marks > mahira.math_marks)
    {
        cout << hacib.name << endl;
    }
    else if (mahira.math_marks > habib.math_marks && mahira.math_marks > hacib.math_marks)
    {
        cout << mahira.name << endl;
    }

    if (habib.math_marks < hacib.math_marks && habib.math_marks < mahira.math_marks)
    {
        cout << habib.name << endl;
    }
    else if (hacib.math_marks < habib.math_marks && hacib.math_marks < mahira.math_marks)
    {
        cout << hacib.name << endl;
    }
    else if (mahira.math_marks < habib.math_marks && mahira.math_marks < hacib.math_marks)
    {
        cout << mahira.name << endl;
    }

    //  ascending order
    if (habib.math_marks < hacib.math_marks && habib.math_marks < mahira.math_marks)
    {
        cout << habib.name << endl;
    }
    else if (hacib.math_marks < habib.math_marks && hacib.math_marks < mahira.math_marks)
    {
        cout << hacib.name << endl;
    }
    else if (mahira.math_marks < habib.math_marks && mahira.math_marks < hacib.math_marks)
    {
        cout << mahira.name << endl;
    }
    if (habib.math_marks > hacib.math_marks || habib.math_marks > mahira.math_marks)
    {
        cout << habib.name << endl;
    }
    else if (hacib.math_marks > habib.math_marks || hacib.math_marks > mahira.math_marks)
    {
        cout << hacib.name << endl;
    }
    else if (mahira.math_marks > habib.math_marks || mahira.math_marks > hacib.math_marks)
    {
        cout << mahira.name << endl;
    }

    if (habib.math_marks > hacib.math_marks && habib.math_marks > mahira.math_marks)
    {
        cout << habib.name << endl;
    }
    else if (hacib.math_marks > habib.math_marks && hacib.math_marks > mahira.math_marks)
    {
        cout << hacib.name << endl;
    }
    else if (mahira.math_marks > habib.math_marks && mahira.math_marks > hacib.math_marks)
    {
        cout << mahira.name << endl;
    }

    return 0;
}