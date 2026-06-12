#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        /// input nilam.........
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int even = 0;
            int odd = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            int regult = (target - even);
            cout << regult << endl;
        }
    }

    return 0;
}