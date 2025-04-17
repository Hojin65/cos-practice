#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    unsigned int x, y;
    
    if (argc !=3 )
    {
        cout << "error" << endl;
        return 1;
    }

    x = atoi(argv[1]);
    y = atoi(argv[2]);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    if (x<y)
        cout << "x < y" << endl;
    else
        cout << "x >= y" << endl;
    return 0;
}