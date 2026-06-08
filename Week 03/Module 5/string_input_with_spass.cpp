#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char a;
    // cin >> a;             // akta line input nayar jonno cin use korbo..
    // cin.getline(a, size); // cher a spase soho input nite hole  {cin.getline(a,size)} function ti ues korbo..
    // string s;
    // getline(cin, s); // string bultig function a input nayar jonno amra getline(cin,s) use korbo..
    // but getline a akta somosa hocce se (Enter) pele iput neya nay..ar jono
    // cin.ignore() ai function ti......
    {
        int x;
        string b;
        cin >> x;
        cin.ignore();
        getline(cin, b);

        cout << x << endl;
        cout << b << endl;
        return 0;
    }
}