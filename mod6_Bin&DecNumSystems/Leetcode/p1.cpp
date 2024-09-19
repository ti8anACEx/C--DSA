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