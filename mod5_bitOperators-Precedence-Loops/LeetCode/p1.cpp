// Q: Subtract the product and sum of digits of an integer

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Q: Subtract the product and sum of digits of an integer. Enter num: "<< endl;
    cin >> num;

    int prod = 1, sum = 0;
    while(num!=0){
        int digit = num%10;
        prod *= digit;
        sum += digit;
        num = num/10;
    }

    cout<< "Difference is " << prod - sum << endl;
}