#include <iostream>
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
    for (int i = a - 1; i >= 0; i--)
    {
        cout << n[i] << " ";
    }

    return 0;
}