// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll;
//     int GPA;
// };
// int main()
// {
//     int a;
//     cin >> a;
//     Student arrObj[a];
//     for (int i = 0; i < a; i++)
//     {
//         cin >> arrObj[i].name >> arrObj[i].roll >> arrObj[i].GPA;
//     }
//     Student minume;       // minume ar daa gulo object a rakar jonno object..
//     minume.GPA = INT_MAX; // INT_MAX ar valu sorbocco ...
//     for (int i = 0; i < a; i++)
//     {
//         if (arrObj[i].GPA < minume.GPA)
//         {
//             minume = arrObj[i]; // akta objcet ar all valo akta object a cole jaitice,,jodi condition true hoy...
//         }
//     }
//     cout << minume.name << " " << minume.roll << " " << minume.GPA; // print..

//     return 0;
// }

// akon name (spass) show input..

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
        cin.ignore();
        getline(cin, arrObj[i].name);
        cin >> arrObj[i].roll >> arrObj[i].GPA;
    }
    Student minume;       // minume ar daa gulo object a rakar jonno object..
    minume.GPA = INT_MAX; // INT_MAX ar valu sorbocco ...
    for (int i = 0; i < a; i++)
    {
        if (arrObj[i].GPA < minume.GPA)
        {
            minume = arrObj[i]; // akta objcet ar all valo akta object a cole jaitice,,jodi condition true hoy...
        }
    }
    cout << minume.name << " " << minume.roll << " " << minume.GPA; // print..

    return 0;
}