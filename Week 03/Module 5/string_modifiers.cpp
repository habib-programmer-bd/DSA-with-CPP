#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    cin >> s2;

    s += s2; // ati muloto  (s = s + s2)  hisabe kaj kore...(s+= s2) sort kat from ai ta..
    cout << s << endl;

    // s += s2 ar aro akta bikolpo function ace ,seta hoce s.append ....
    s.append(s2);
    cout << s << endl;

    // s.push_back() ai function ar kaj holo aita lat ar sirig ta ke se add kore (push -> add kora).
    s.push_back('h');
    // cout << s << endl;

    // s.pop_back() ai function ta tik s.push_back() ar moto kaj kore but ati rimuve kore dey..
    s.pop_back();
    cout << s << endl;
    return 0;
}