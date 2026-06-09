#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string r = a;
    reverse(r.begin(),r.end());
    if (a == r)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}