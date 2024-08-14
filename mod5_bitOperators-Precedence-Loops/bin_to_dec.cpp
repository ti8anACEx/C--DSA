#include <iostream>
using namespace std;

int main(){
    int original =10;

    int total_Bdigit_counts = 0;
    int n = original;
    while (n!=0){
        total_Bdigit_counts++;
        n = n >> 1;
    }

    

    int limit = total_Bdigit_counts - 1; // or sizeof(n)*8 - 1, then it will give 00000000000000000000000000001010

    for(int i = limit; i>=0; i--) {
        cout << ((original >> i ) & 1);
    } 
}