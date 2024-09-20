// Q: is the input number power of 2?

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    

    int power = 1;
    for (int i = 0; i <= 30; i++){ // as limit is -2^31 to 2^31 -1 
        if (num == power){
            cout << "Yes its a power of 2" << endl;
            return 1;
        }
        if (power < INT32_MAX)
        power *=2;
    }

    cout << "NOoe" << endl;
    return 0;
}

// ANOTHER BUT BEST WAY!

// check if the number of set bits = 1 (ie total number of 1 bits in a binary number is 1)
// then only, the number is a perfect square!
// eg, 8, a perfect square has only one set bit '1'000

// main(){
    // if (one_bits(512)==1){
    //     cout<<"The number is a perfect square!";
    // }
// }

int one_bits(int x){
    int ones = 0;
    while (x!=0){
        if (x&1) ones++;
        x =  x >> 1; 
    }
    return ones;
}
