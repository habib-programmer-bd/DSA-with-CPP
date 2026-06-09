#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'E' || a[i] == 'e')
        {
            countE++;
        }
        else if (a[i] == 'G' || a[i] == 'g')
        {
            countG++;
        }
        else if (a[i] == 'Y' || a[i] == 'y')
        {
            countY++;
        }
        else if (a[i] == 'P' || a[i] == 'p')
        {
            countP++;
        }
        else if (a[i] == 'T' || a[i] == 't')
        {
            countT++;
        }

    }
    int possbol_woed = min({countE, countG, countY, countP, countT});
    cout << possbol_woed << endl;

    return 0;
}