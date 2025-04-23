#include <iostream>
using namespace std;

long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}

int main()
{
    long *xp, y;
    *xp = 3;
    y = 4;
    cout << exchange(xp, y) << endl;
    return 0;
}