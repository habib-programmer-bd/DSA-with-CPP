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
    int falg = 1;
    int x = 0;
    int y = a - 1;

    while (x < y)
    {

        if (n[x] != n[y])
        {
            falg = 0;
            break;
        }

        x++;
        y--;
    }
    if (falg == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

