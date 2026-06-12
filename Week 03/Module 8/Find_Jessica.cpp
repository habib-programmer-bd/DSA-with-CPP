#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int flag = 0;
    string word;
    stringstream ss(s);
    // ss >> word;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
            break;
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
    return 0;
}