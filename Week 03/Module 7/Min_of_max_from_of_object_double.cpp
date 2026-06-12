#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    double GPA;
};
int main()
{
    int a;
    cin >> a;
    Student arrObj[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arrObj[i].name >> arrObj[i].roll >> arrObj[i].GPA;
    }
    double minume = arrObj[0].GPA;
    for (int i = 0; i < a; i++)
    {
        minume = min(arrObj[i].GPA , minume);
    }
    cout << minume;
    
    return 0;
}