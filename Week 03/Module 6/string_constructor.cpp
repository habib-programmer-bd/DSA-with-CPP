#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Ahosan"  ;
    // 1
    string s("Ahosan");

    // 2
    string s("Ahosan", 4);
    // output ->"Ahos" fast charter gulo reke baki charter gulo muce dibe..

    // 3
    string s = "Ahosan";
    string t(s, 2);
    // output -> "osan" fast charter gulo muce dibe..

    // 4
    string s(7, 'A');
    // output->"AAAAAAA" sob gulo akoi charter hobe..
    cout << s << endl;
    return 0;
}