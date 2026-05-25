#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // ai funtion ti akta inpt ignore kore..
    char a[100];
    cin.getline(a, 100); // space soho input nayor jonno cin.getline use kora hoy..
    cout << x << endl << a;
}