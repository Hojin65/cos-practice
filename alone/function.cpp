#include <iostream>
#define BUFLEN 10
using namespace std;
void print_result(int *arr, int idx) {
    cout << "arr[" << idx << "] = " << arr[idx] << endl;
}

int index(int num){
    return num+1;
}

int main(int argc, char *argv[])
{
    int arr[BUFLEN];
    int i;

    for (i=0; i<10; i++) {
        arr[i]= 10-i;
    }

    print_result(arr,index(0));
    print_result(arr,index(3));
    print_result(arr,7);


    return 0;
}