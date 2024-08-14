// Q: Number of 1 Bits in a number

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int original = num;

    // Soln 1 cnvt the num to binary and count 1s through a for loop



    // Soln 2 keep bit shiftng until we get all 0 bits 
    int one_counts = 0;

    while (num!=0){
        if (num & 1){ // ie if num & 1 == 1 then 
            one_counts++;
        }
        num = num >> 1;
    }

    cout << "Number of 1s in binary representation of "<< original <<" is " << one_counts << endl;
}