#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    char s[x];
    for (int i = 0; i < x; i++)
    {
        cin >> s[i];
    }

    int Anton_count = 0;
    int Danik_count = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'A')
        {
            Anton_count++;
        }
        else if (s[i] == 'D')
        {
            Danik_count++;
        }
    }
    if (Anton_count > Danik_count)
    {
        cout << "Anton" << endl;
    }
    else if (Anton_count == Danik_count)
    {
        cout << "Friendship" << endl;
    }
    else if (Anton_count < Danik_count)
    {
        cout << "Danik" << endl;
    }
    cout << Anton_count << " " << Danik_count << endl;
    return 0;
}