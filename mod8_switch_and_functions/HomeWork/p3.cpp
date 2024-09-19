// find Number of set bits in two numbers (ie, total number of 1s)

#include <iostream>
using namespace std;

int one_bits(int x){
    int ones = 0;
    while (x!=0){
        if (x&1) ones++;
        x =  x >> 1; 
    }
    return ones;
}

int total_one_bits(int a, int b){
    return one_bits(a) + one_bits(b);
}

int main() {
    cout<< total_one_bits(10, 5) << endl; 
    //ans = 4 as 10 =1010 and 5 = 101
}