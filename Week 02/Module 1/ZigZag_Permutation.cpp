#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1, j = a; i <= j; i++, j--)
    {
        if (i == j)
        {
            cout << i;
        }
        else
        {
            cout << i << " " << j << " ";
        }
    }

    return 0;
}