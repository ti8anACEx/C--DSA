#include <iostream>
using namespace std;


// passByValue // as 'array' is an address itself, so IT IS ALSO  VULNERABLE TO CHANGE IN PASS BY VALUE FUNCTION
void printArrayByValue(int arr[], int length){
    cout<<endl<<"The array is:"<<endl;

    for (int i=0; i<length; i++){
        cout<<arr[i] << '\t';
    }
}


// passByReference. Both refernece ways can modify the actual array
void printArrayByRef(int *arr, int length){
    cout<<endl<<"The array is:"<<endl;

    for (int i=0; i<length; i++){
        cout<< *(arr + i) << '\t';
    }
}

void printArrayByRef2(int &arrFrontElement, int length){
    cout<<endl<<"The array is:"<<endl;

    for (int i=0; i<length; i++){
        cout<< *(&arrFrontElement + i) << '\t';
    }
}


int main(){
    int array[12] = {2, 4, 6, 8, 9, 10, 11, 12, 13, 14, 15};


    printArrayByValue(array, sizeof(array)/4); // as 'array' is an address itself, so IT IS ALSO  VULNERABLE TO CHANGE IN PASS BY VALUE FUNCTION 

    printArrayByRef(array, sizeof(array)/4); // not &array as array is already a pointer in itself in case of arrays/lists

    printArrayByRef2(*array, sizeof(array)/4); // in case of arrays only, *array means array[0]




    // int &var1 = *array;
    // var1 = *array;
    // cout << var1 << endl; gives value array[0]!!

    // int x = 44; // for normal variables
    // int *var2 = &x;
    // var2 = &x;

    // int *var3 = array; for array variables, the name of the array 'array' is itself a pointer storing address of array[0]
    // var3 = array;

    


    return 0;
}