#include <iostream>
using namespace std;

// eg 5 -> 101 last bit is always 1 in case of odd numbers
    // "function signature"
bool isEven(int num) {
    return (num&1)? 0 : 1; // or check (num%2 == 0)? 1:0
}

int main (){
    cout << isEven(27) << endl;
    cout << isEven(56) << endl;
}