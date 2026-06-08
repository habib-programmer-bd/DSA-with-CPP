#include <bits/stdc++.h>
using namespace std;
int main()
{
    // rege based for loop aita hocce sort kat loop ai ta for lop ar sort vartion...
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }

    // string a;
    // cin >> a;

    for (int x : n)
    {
        cout << x << endl;
    }

    return 0;
}