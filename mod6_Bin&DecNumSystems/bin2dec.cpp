#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int bin = 1011001;
    int ans = 0;

    for (int i = 0 ; bin != 0 ; i++){
        int digit = bin % 10; // or bin % 2
        if (digit==1) {
            ans += pow(2,i);
        }
        bin /= 10;
    }

    cout << ans << endl;
}