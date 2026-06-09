#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int x = a.find("EGYPT");

    while (x != string::npos)
    {
        a.replace(x, 5, " ");
        x = a.find("EGYPT");
    }

    cout << a << endl;

    return 0;
}