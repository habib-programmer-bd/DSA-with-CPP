// string capacity functions...
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // variabel name.size()   ati string size ber kore help kore...
    cout << s.size() << endl;

    // akta string maximam koto tuku size nite oarbe seta...
    cout << s.max_size() << endl; // ati sadaranoto 10^6 porjonto jayga nay,ati daly lifr kaj kore na basi..

    // s.capacity function.aita function se tar moto kore capacity ta baray nay...
    cout << s.capacity() << endl;

    // s.clear kore day,mane muce day,,akta string ke se muce dey...
    s.clear();
    cout << s.size() << endl;

    // s.empty ati dare strig ar vitore ki ace ta dake..manaing string ar w=vitore data ace ki na.
    // data na takle ate true return kore ar takle false return kore...
    if (s.empty() == true)
    {
        cout << "datr nai" << endl;
    }
    else
    {
        cout << "data ace" << endl;
    }

    // s.resize dar amra nijer moto akt astring kore resize kori ,nijer mon moto nite pari
    s.resize(5);
    // abar komano na amra resize ar madore barateo pari..
    s.resize(20, 'x');
    cout << s << endl;

    return 0;
}
