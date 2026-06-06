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
    for (int i = 0; i <= a; i++)
    {
        int flag = 0;

        for (int j = 0; j < a; j++)
        {
            if (i == n[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}