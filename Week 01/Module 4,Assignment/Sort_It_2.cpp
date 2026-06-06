#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n[], int a)
{

    int *d = new int[a];
    for (int i = 0; i < a; i++)
    {
        d[i] = n[i];
    }

    sort(d, d + a, greater<int>());

    return d;
}

int main()
{
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    int *x = sort_it(n, a);

    for (int i = 0; i < a; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}