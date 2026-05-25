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
    int min = n[0];
    int max = n[0];
    int x = 0;
    int y = 0;
    for (int i = 0; i < a; i++)
    {
        if (min > n[i])
        {
            min = n[i];
            x = i;
        }
        if (max < n[i])
        {
            max = n[i];
            y = i;
        }
    }
    swap(n[x], n[y]);
    for (int i = 0; i < a; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}