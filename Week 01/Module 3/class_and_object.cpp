#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[1000];
    int roll;
    double gpa;
};

int main()
{
    Student a, b; // Ai kane (a) ta hocce akta object Ar Student ta hocce Akta vriabel..
    cin.getline(a.name, 1000);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 1000);
    cin >> b.roll >> b.gpa;
    cout << a.name << " " << a.gpa << " " << a.roll << endl;
    cout << b.name << " " << b.gpa << " " << b.roll << endl;
    return 0;
}