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
    int x = n[0];
    for (int i = 0; i < a; i++)
    {
        if (x > n[i])
        {
            x = n[i];
        }
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (n[i] == x)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}