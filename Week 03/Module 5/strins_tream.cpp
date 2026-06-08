#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s); // stringstream ar mull kaj hocce word by word vag kore...
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}