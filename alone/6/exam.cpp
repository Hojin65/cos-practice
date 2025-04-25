#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char str[6]={'h','e','l','l','o',0};
    int i;
    i=0;
    while (str[i]!=0)
        i+=1;
    cout<<i<<endl;

    return 0;
}