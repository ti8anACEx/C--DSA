#include <iostream>
#include <vector>
using namespace std;

    int numberOfPresence(int key, vector<int>& arr){
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == key){
                count++;
            }
        }

        return count;
    }

    void makeVectorUnique(vector<int>& arr, int length){
        vector<int> brr;
        for (int i = 0; i < length; i++) {
            if (numberOfPresence(arr[i], brr) == 0){ 
                brr.push_back(arr[i]);
            }
        }
        arr.clear();
        arr = brr; // making arr unique
    }