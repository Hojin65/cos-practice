#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
    int a, b, c;
    if (argc!=3){
        cout << "Please insert two numbers" << endl;
        return 0;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    if (a<0)
    c = a-(a/b-1)*b;
    else
    c = a % b;
    cout << a << " mod " << b << " = " << c << endl;
    return 0;
}