#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n";
    cin>> n;

    int i = 0, sum = 0;

    while (i<=n){
        sum += i;
        i+=2;
    }

    cout<<"Sum is "<<sum<<endl;

    return 0;
}