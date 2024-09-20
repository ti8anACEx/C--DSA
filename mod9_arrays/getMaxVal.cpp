#include <iostream>

int getMaxValue(int arr[], int len){
    int max = INT32_MIN;
    int index = -1;
    for (int i = 0; i < len; i++) {
        if (arr[i]>max) {
            max = arr[i];
            index = i;
        }
    }

    return max;
}


int getMinValue(int arr[], int len){
    int min = INT32_MAX;
    int index = -1;
    for (int i = 0; i < len; i++) {
        if (arr[i]<min) {
            min = arr[i];
            index = i;
        }
    }

    return min;
}

