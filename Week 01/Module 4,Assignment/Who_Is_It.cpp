#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int mark;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student Ditels[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> Ditels[i].id >> Ditels[i].name >> Ditels[i].section >> Ditels[i].mark;
        }
        int index = 0;
        for (int i = 1; i < 3; i++)
        {
            if (Ditels[i].mark > Ditels[index].mark)
            {
                index = i;
            }

            else if (Ditels[i].mark == Ditels[index].mark && Ditels[i].id < Ditels[index].id)
            {
                index = i;
            }
        }
        cout << Ditels[index].id << " " << Ditels[index].name << " " << Ditels[index].section << " " << Ditels[index].mark << endl;
    }
    return 0;
}