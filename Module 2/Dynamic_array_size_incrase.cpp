#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int *x = new int[8];
    for (int i = 0; i < 8; i++)
    {
        x[i] = a[i];
    }

    for (int i = 5; i < 8; i++)
    {
        cin >> x[i];
    }
    delete[] a;  // Akti Array Delete kore .... And variable.Ar jonno ,,delete (name); dile delete hoya jay..
    a = nullptr; // Ati Delete korar pore Array tar ponter Addreass kuje pay na..
    for (int i = 0; i < 8; i++)
    {
        cout << x[i] << " ";
    }

    // cout << &a[0];

    return 0;
}

