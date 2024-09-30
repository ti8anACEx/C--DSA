// Q: 1,2,3,4,5,6,7,8,9,10 convert 
// 2       1       4       3       6       5       8       7       10       9


#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int length = sizeof(arr)/sizeof(int);

    for (int i=0; i<length; i+=2){
        // Handle the odd length case, ignore the last element. But here, its optional as our code is enough to do so
        if (i+1 >= length) continue; // or return as technically it would be the last iteration

        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for (int i=0; i<length; i++){
        cout<<arr[i] << '\t';
    }
    return 0;
}