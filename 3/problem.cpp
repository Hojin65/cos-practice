#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int x,y,z,i;
    cin>>x;
    cin>>y;
    z=0;

    if (x>y) {
        return 0;
    }

    if(x<y) {
        for(i=x; i<y+1; i++){
            z+=i;
        }
        cout<<z<<endl;
    }
    return 0;
}