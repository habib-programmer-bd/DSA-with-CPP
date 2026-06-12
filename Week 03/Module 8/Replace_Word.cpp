#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string k, b;
        cin >> k >> b;
        int p = b.size();
        int index = k.find(b);
        while (index != string::npos)
        {
            k.replace(index, p, "#");
            index = k.find(b);
        }
        cout << k << endl;
    }

    return 0;
}