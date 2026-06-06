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
    int a;
    cin >> a;
    Student Ditels[a];
    for (int i = 0; i < a; i++)
    {
        cin >> Ditels[i].id >> Ditels[i].name >> Ditels[i].section >> Ditels[i].mark;
        int index = 0;
        int max = Ditels[index].mark;
        for (int i = 0; i < a; i++)
        {
            if (Ditels[i].mark > max)
            {
                index = i;
                max = Ditels[i].mark;
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