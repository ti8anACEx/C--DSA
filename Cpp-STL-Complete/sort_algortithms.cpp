// sort(arr, arr+n) // for fully sorting an array. Note that arr+n refers to ptr after last element!
// sort(arr, arr+n, greater<int>());
// sort(v.begin(), v.end()) // if there is vector

#include <iostream>
#include <algorithm>
#include <vector>

#include "my_custom_comparator.cpp"

using namespace std;

int main() {
    int arr[5] = {2,4,9,3,7};
    sort(arr, arr+4);
    
    for (int i : arr){
        cout << i << endl; // prints 2347 not 9 as sorted in [arr, arr+4), means index [0,4) means index [0,3]
    }
    
    vector<int> vec = {2,4,9,3,7};
    sort(vec.begin(), vec.end());
    
    for (int i : vec){
        cout << i << endl; // prints 23479
    }

    // FOR SORTING IN DESCENDDING ORDER, USE THE COMPARATOR, which is a generic resolver returning boolean values:
    sort(vec.begin(), vec.end(), greater<int>());
    
    for (int i : vec){
        cout << i << endl; // prints 97432
    }

    // Now if vector is of pair
    vector<pair<int, int>> v = { {3,1}, {2,1}, {7,1}, {5,2} };
    sort(v.begin(), v.end());

    for (auto pair : v){ // by default, pairs are sorted on the basis of first element of pair
        cout << pair.first << pair.second << endl; 
        // prints
        // 21
        // 31
        // 52
        // 71
    }

    // Now if we want to sort on the basis of second element, then we need to write, well, our CUSTOM COMPARATOR!
    // our  custom comparator does not need '()' at the end unlike greater<type>'()', as the former is defined as comparator 'function' and not comparator 'functor'
    // more on this in my_custom_comparator.cpp

    sort(v.begin(), v.end(), myCustomComparatorAsFunction);
     for (auto pair : v){
        cout << pair.first << pair.second << endl; 
        // prints
        // 21
        // 31
        // 71
        // 52
    }


    return 0;
} 
