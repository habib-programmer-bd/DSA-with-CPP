// aita espes cara string input nayar tecnic........
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    double gpa;
};
int main()
{
    int x;
    cin >> x;
    student n[x];
    for (int i = 0; i < x; i++)
    {
        cin >> n[i].name >> n[i].roll >> n[i].gpa;
    }
    for (int i = 0; i < x; i++)
    {
        cout << n[i].name << " " << n[i].roll << " " << n[i].gpa << endl;
    }

    return 0;
}

// (spesce) showa input nayar tecnicek....
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    double gpa;
};
int main()
{
    int x;
    cin >> x;
    student n[x];
    for (int i = 0; i < x; i++)
    {
        cin.ignore();
        getline(cin, n[i].name);
        cin >> n[i].roll >> n[i].gpa;
    }
    for (int i = 0; i < x; i++)
    {
        cout << n[i].name << " " << n[i].roll << " " << n[i].gpa << endl;
    }

    return 0;
}