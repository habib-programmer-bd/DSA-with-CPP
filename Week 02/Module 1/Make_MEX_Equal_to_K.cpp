#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, k;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    cin >> k;

    int flag = 0;
    for (int i = 0; i < a; i++)
    {
        int valu = n[i];
        if (valu == k)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            int prasiend = 0;
            for (int j = 0; j < a; j++)
            {
                int valu = n[j];
                if (valu == i)
                {
                    prasiend = 1;
                    break;
                }
            }
            if (prasiend == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}