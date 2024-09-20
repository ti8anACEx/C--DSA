#include <iostream>
using namespace std;

int main() {
    int arr[11] = {22, 33, 44, 55, 66, 77, 89, 98, 99, 100, 101};
    int len = sizeof(arr)/sizeof(int);


    // METHOD 1: without swap function
    for (int i = 0; i < (len-1)/2; i++) {
        int temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = temp;
    }

    //METHOD 2: with the prebuilt swap function
    // int start = 0, end = len-1;
    // while(start <= end) {
    //     swap(arr[start], arr[end]); // does swapping in respective adresses
    //     start++; end--;
    // }




    // PRINTING
    for (int i = 0; i < len; i++) {
        cout << arr[i] << '\t';
    }

    return 0;
}