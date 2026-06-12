#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string ss;
    int id;
    int matah_marks;
    int enlish_marks;
};
bool cmp(Student l, Student r)
{
    if ((l.matah_marks + l.enlish_marks) == (r.matah_marks + r.enlish_marks))
    {
        return l.id < r.id;
    }
    else
    {
        return (l.matah_marks + l.enlish_marks) > (r.matah_marks + r.enlish_marks);
    }
}
int main()
{
    int x;
    cin >> x;
    Student arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].ss >> arr[i].id >> arr[i].matah_marks >> arr[i].enlish_marks;
    }
    sort(arr, arr + x, cmp);
    for (int i = 0; i < x; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].ss << " " << arr[i].id << " " << arr[i].matah_marks << " " << arr[i].enlish_marks << endl;
    }

    return 0;
}