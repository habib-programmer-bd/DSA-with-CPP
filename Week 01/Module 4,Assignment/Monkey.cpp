#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while (getline(cin, a))
    {
        sort(a.begin(), a.end());
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == ' ')
            {

                continue;
            }
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}