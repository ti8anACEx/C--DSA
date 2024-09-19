// nth fibonacci number

#include <iostream>
using namespace std;

int nth_fibonacci(int n){
    int first = 0, second = 1;
    if (n == 1) return first;
    if (n == 2) return second;

    n = n - 2;
    for (int i = 1; i <= n; i++){
        int temp = second;
        second = first + second;
        first = temp;
    }
    return second;
}

int main(){
    cout << nth_fibonacci(8) << endl;
}