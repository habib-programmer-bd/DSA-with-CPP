#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string a;
        cin >> a;
        int count = 0;
        if (a.size() <= 10)
        {
            cout << a << endl;
        }
        else
        {
            cout << a[0] << a.size() - 2 << a[a.size() - 1] << endl;
        }
    }

    return 0;
}