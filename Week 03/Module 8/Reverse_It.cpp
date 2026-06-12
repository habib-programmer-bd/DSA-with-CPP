#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string ss;
    int id;
};
int main()
{
    int x;
    cin >> x;
    Student arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].ss >> arr[i].id;
    }

    for (int i = 0; i < x / 2; i++)
    {
        swap(arr[i].ss, arr[x - 1 - i].ss);
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].ss << " " << arr[i].id << endl;
    }

    return 0;
}