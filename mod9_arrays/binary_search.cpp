#include <iostream>
using namespace std;

int binary_search(int arr[], int len, int key){
    int start = 0, end = len-1; // index tracking

    while (start <= end){
        int mid = start + ((end - start)/2); // or simply  int mid = (end + start)/2;

        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key) {
            start = mid + 1; // or start = mid for simplicity
        } else if (arr[mid] > key) {
            end = mid - 1; // or end = mid for simplicity
        }
    }

    return -1;
}

int main (){
    int arr[11] = {22, 33, 44, 55, 66, 77, 89, 98, 99, 100, 101}; // SORTED ARRAY
    int key = 100;

    int index = binary_search(arr, sizeof(arr)/4, key);

    cout<<"Element found at index "<<index<<endl;
    return 0;
}