#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char x;
    int b;
    char y;
    int c;
    cin >> a >> x >> b >> y >> c;
    int plus = a + b;
    int mus = a - b;
    int gun = a * b;
    if (x == '+')
    {
        if (c == plus)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << plus << endl;
        }
    }
    else if (x == '-')
    {
        if (c == mus)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << mus << endl;
        }
    }
    else if (x == '*')
    {
        if (c == gun)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << gun << endl;
        }
    }

    return 0;
}