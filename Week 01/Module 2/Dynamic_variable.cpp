// Dynamic valu Ar sintex

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int; // (new) ati diya dynamic variable dicliyar hoy..
    *p = 10;
    cout << *p;
}

// stack mamory te kaj sese , funtion and array delete hoye jay tar Ex....
#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x = 10;
    p = &x;
    cout << "Fun funtion -> " << *p << endl;
}
int main()
{
    fun();
    cout << "Main funtion -> " << *p << endl;
}

// Dynamic variable kaj sese data delete hoya jay na tar EX.....
#include <bits/stdc++.h>
using namespace std;
int *x;
void fun()
{
    int *p = new int;
    *p = 100;
    x = p;
    cout << "Fun funtion -> " << *x << endl;
}
int main()
{
    fun();
    cout << "Main funtion -> " << *x << endl;
}

// dynamic and Stack mamory modde main partoko,,,

// stack variable jokon amra kono funtion ruten hoya jai, sate sate funtion a taka sokon sta funtion teke mujce jay....
// ar dynamic variable ,kono funtion teke ruten hoya gele ,, sob data teke jay..


//new kiword ta heap mamore teke acsec kore..
