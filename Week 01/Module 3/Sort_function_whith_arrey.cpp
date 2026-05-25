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
    sort(n, n + a -3);  // Ascendig
    sort(n,n+a ,greater<int>()); // descending
    for (int i = 0; i < a; i++)
    {
        cout << n[i] << " ";
    }
    return 0;
}