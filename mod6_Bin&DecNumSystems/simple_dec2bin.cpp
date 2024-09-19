#include <iostream>
#include <math.h>
using namespace std;

// NOTE: find out why does not works if ans is int and not float
int main () {
    int n = -5;

    bool flag = false;
    if (n < 0) {
        n = -n;
        flag = true;
    }

    float ans = 0;
    int i = 0;

    while (n!=0) {
        int bit = n & 1;
        n = n >> 1; // almost same as dividing the number num by 2

        ans = (bit * pow(10, i++)) + ans;

        // ans = 10*ans + bit; // useful, but gives 101 in places like 1010 so ANOMALY
    }

    if (flag) {
        cout << "The entered number was negative, but still we get this as "<<ans << endl;
    } else {
        cout << ans << endl;
    }
}