#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int x = a.find("EGYPT");
    cout << x << endl;
    while (x != string::npos)
    {
        a.replace(x, 5, " ");
        x = a.find("EGYPT");
    }

    return 0;
}