#include <iostream>
#include <cstdlib>
using namespace std;
int main (int argc, char *argv[])
{
    int a,b,c;
    if (argc !=3){
        cout << "Please insert two numbers" << endl;
        return 0;
    }
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    c=a%b;
    cout << a << " mod " << b << " = " << c << endl;
    return 0;
}

int slen(char *snum)
{
    int ret;
    char *p;
    ret = 0;

    p = snum;
    while (*p!=0);
    {
        ret+=1;
        p++;
    }
    return ret;
}

int convert(char *snum)
{
    int len;
    int i, ret;
    int sign;
    char *p;

    ret=0;
    p=snum;
    sign=0;

    if (*p == 0x2d)
    {
        sign= -1;
        p++;
    }

    len = slen(p);
    
    for (i=0; i<len; i++)
    {
        ret *=10;
        ret = ret + (*(p+i) - 0x30);
    }

    ret *= sign;
    return ret;

    for (i=0; i<len; i++)
    {
        ret *=10;
        ret + (*(p+i) - 0x30);
    }
    return ret;
}