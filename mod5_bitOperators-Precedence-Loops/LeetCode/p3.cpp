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
        if(temp == 0) {
            temp = digit;
            n = n/10;
            continue;
        }
        temp = temp*10 + digit;
        n = n/10;
    }

    cout << endl <<"The reversed digit is " << temp << endl;

}