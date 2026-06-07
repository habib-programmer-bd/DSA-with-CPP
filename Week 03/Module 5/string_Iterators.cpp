#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // akon amra jodi ai string ta 1 by 1 ta print korte cai tahole..amake akta loop calite hobe.
    // for (int i = 0; i < s.size() ; i++)
    // {
    //     cout << s[i] << endl;
    // }

    // but samne string ar index number takbe na ,tokon amara lterarore use korbo.
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}