// initialize entire array with a specific value
#include <iostream>
#include <algorithm>
using namespace std;


//Globally,  int arr[100]; makes {0, 0, 0, 0, 0, ...}


int main(){
    // int arr[100] = {x}; makes {x, 0, 0, 0, 0, ...}
    //Locally,  int arr[100]; makes {garbage1,garbage2,garbage3,garbage4,...}

    
    int arr[100];
    // int brr[50] = { [0 ... 49] = 56}; // for some specific GCC compilers ONLY!
    fill_n(arr, 100, 69);

    for (int i = 0; i < 100; i++){
        cout << arr[i] << endl;
        // cout << brr[i] << endl;
    }

    return 0;
}