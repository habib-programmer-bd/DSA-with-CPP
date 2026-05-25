#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (n[i] != 0)
        {
            cout << n[i] << " ";
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (n[i] == 0)
        {
            cout << n[i] << " ";
        }
    }

    return 0;
}