
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l, Student r)
{
    marks and roll sob compayar..............................
    if (l.marks > r.marks)
    {
        return true;
    }
    else if (l.marks < r.marks)
    {
        return false;
    }
    else
    {
        return l.roll < r.roll;
    }

    sort cote....
    if (l.marks == r.marks)
    {
        return l.roll < r.roll;
    }
    else
    {
        return l.marks > r.marks;
    }

    // aro sort cort....
    return l.marks == l.marks ? l.roll < r.roll : l.marks > r.marks;
}
int main()
{
    int x;
    cin >> x;
    Student arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr + x, cmp);

    for (int i = 0; i < x; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}