// Q: Find unique


// Problem statement
// Send feedback
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.

#include <iostream>
using namespace std;

int findUnique(int *arr, int length){ // as int *arr is the parameter, we can use arr[i] or *(arr+i) to access elements
    // bool isUnique[length] = {0}; // initialized with {0,0,0....} 
    // // 0 means uniquely present suppose, 1 means not unique

    // for (int i = 0; i < length; i++) {
    //     for (int j = 0; j < length; j++) {
    //         if (*(arr+i) == *(arr + j)) {
    //            isUnique[i] = 1;
    //            isUnique[j] = 1;
    //            break;
    //         }
    //     }
    // }
    
    // int targetIndex = -1;

    // for (int i = 0; i < length; i++) {
    //     if (*(arr+i) == 0){
    //         targetIndex = i;
    //         break;
    //     }
    // }

    // return *(arr+targetIndex);

    // MOST OPTIMAL METHOD!

    // 2 + 3 + 4 - 2 + 43 - 3 - 4 = 43!
    // 2 ^ 3 ^ 4 ^ 2 ^ 43 ^ 3 ^ 4 = 43!
    // a ^ a = 0,   0 ^ a = a,   a^ ~a != 0

    int ans = 0;
    for (int i = 0; i < length; i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}


int main(){
    int brr[1000] = {};
    int array[7] = {2, 3, 4, 2, 43, 3, 4};
    cout << findUnique(array, 7) << endl;
    return 0;
}