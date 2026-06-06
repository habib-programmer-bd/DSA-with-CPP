#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int arr, sum;
        cin >> arr >> sum;
        int n[arr];
        for (int i = 0; i < arr; i++)
        {
            cin >> n[i];
        }
        int flag = 0;
        for (int i = 0; i < arr; i++)
        {
            for (int j = i + 1; j < arr; j++)
            {
                for (int k = j + 1; k < arr; k++)
                {
                    if (n[i] + n[j] + n[k] == sum)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}