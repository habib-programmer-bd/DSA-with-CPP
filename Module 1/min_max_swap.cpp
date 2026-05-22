#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d, f;
    cin >> a >> b >> c >> d >> f;
    int x = min({a, b, b, c, d, f}); // Ai funtion ti sob teke coto number take call kore...
    int y = max({a, b, b, c, d, f}); // Ai funtion ti sob teke boro number take call kore...

    swap(a, b); // ai funtion ti 2 ta valu ke swap kore day..
    cout << x << endl
         << y << endl;
    cout << a << " " << b;
}
