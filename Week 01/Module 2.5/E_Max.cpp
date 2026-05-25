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
    int max = 0;
    for (int i = 0; i < a ; i++)
    {
        if (max < n[i])
        {
            max = n[i];
        }
    }

    cout << max << endl;

    return 0;
}