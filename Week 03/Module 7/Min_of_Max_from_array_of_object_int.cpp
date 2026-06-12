#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int GPA;
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
    int minume = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        minume = min(arrObj[i].GPA , minume);
    }
    cout << minume;
    
    return 0;
}