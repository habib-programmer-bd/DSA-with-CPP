// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };
// bool cmp(Student l, Student r)
// {
//     return l.marks > l.marks; //// (sort cote)
// }
// int main()
// {
//     int x;
//     cin >> x;
//     Student arr[x];
//     for (int i = 0; i < x; i++)
//     {
//         cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
//     }

//     sort(arr, arr + x, cmp);

//     for (int i = 0; i < x; i++)
//     {
//         cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
//     }
//     return 0;
// }


////////////////////////////////////////////////////////////////////

// marks,,== hole, roll asending akare sort kora...

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
    if (l.marks >= r.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
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