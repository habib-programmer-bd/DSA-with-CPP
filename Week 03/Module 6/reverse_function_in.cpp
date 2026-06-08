#include <bits/stdc++.h>
using namespace std;
int main()
{
    // array reverse korar jonno reverse function use korbo amara..
    // array
    {
        int x;
        cin >> x;
        int n[x];
        for (int i = 0; i < x; i++)
        {
            cin >> n[i];
        }

        reverse(n, n + x);
        for (int i = 0; i < x; i++)
        {
            cout << n[i] << " ";
        }
    }
    cout << endl;
    // string reverse korar jonno reverse function use korbo amara..
    //  string
    {
        string x;
        // cin >> x;
        cin.ignore();
        getline(cin, x);
        reverse(x.begin(), x.end());
        cout << x;
    }
    return 0;
}