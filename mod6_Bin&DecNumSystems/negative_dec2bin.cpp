

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int original;
    cout << "Enter a negative original number to find its binary representation in memory: " << endl;
    cin >> original;
    int n = -original;


    // representation of the negative numberin binary ignoring the negative sign
    int binary_repn = 0;
    int length = 0;

    while (n!=0) {
        int bit = n & 1;
        binary_repn = (bit * pow(10, length)) + binary_repn;
        n = n >> 1;
        length++;
    }
    cout << binary_repn << endl;

    // 1s compliment

    // Adding 1 for the final memory representation

    // TODO: This program is incomplete
    
}