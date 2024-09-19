// Q: Reversing an integer 234 -> 432

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter a number to be reversed." << endl;
    cin >> n;

    int temp = 0;

    while(n!=0) {
        int digit = n%10;
        n = n/10;

        if(temp >= INT32_MAX/10 || temp <= INT32_MIN/10) {
             cout << endl <<"The reversed digit is " << 0 << endl;
            return 0;
        }
        temp = temp*10 + digit;
    }

    cout << endl <<"The reversed digit is " << temp << endl;

}