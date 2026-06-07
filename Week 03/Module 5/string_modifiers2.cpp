#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string b = "kamon aco";
    s = b; // (s= ->) ai dara string ar man value ke a sine korte ba cheaing korte parbo..
    cout << s << endl;
    // (s= ->) ar bikolpo akta function ace seta holo ,s.assign() ati daro amra kono string ke valu chaig kore onno akti string ar mane dai..
    s.assign(b);
    s.assign("tumi valo aco");
    cout << s << endl;

    // s.erase() ai function ar kaj hocce ijer moto kore delete kora jabe,,,sudu index nymber ta bole dite hobe..koto number porjoto index numbar delete korbo.
    s.erase(6);
    // and amra jodi fixd koto numbar index teke koto number index delete korte cai setao kora jabe..
    s.erase(2, 3);
    cout << s << endl;

    // s.replace ai function ar kaj hocce kono sting kr reolace kora..kono bakko ke chaing kore ki bosaboo...
    s.replace(2, 1, "habib");
    cout << s << endl;

    // s.insert ai function ti s.replace ar moto kaj kore,sudu aikane 2 ta topic bolte hoy..(1.koto numbar index teke 2."kon string ke add korbo")...
    s.insert(2, "habib");
    cout << s << endl;
    return 0;
}