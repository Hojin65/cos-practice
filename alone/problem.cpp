#include <iostream>
#include <cstdlib>
using namespace std;
int check_validity(int a, int b) {
    if (b>a) {
        return 1;
    }
    else {
        return 0;
    }
}


int sum_up(int a, int b) {
    return (b*(b+1)/2) - (a*(a-1)/2);
}


int main(int argc, char *argv[])
{
    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);

    if (check_validity(a, b)==1){
        cout<< "Sum: " << sum_up(a,b) << endl;
        return 0;
    }
    else {
        cout << "Invalid numbers" << endl;
        return 1;
    }

    return 0;
}