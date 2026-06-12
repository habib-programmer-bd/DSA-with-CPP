#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int x;
        char s;
        cin >> x >> s;
        for (int i = 0; i < x; i++)
        {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}