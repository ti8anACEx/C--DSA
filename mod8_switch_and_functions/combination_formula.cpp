#include <iostream>
using namespace std;

int factorial(int a){ // with recursion
    if (a == 1) return 1;
    return a*factorial(a-1);
}

int factorial2(int a){ // without recursion
    int res = 1;
    for (int i=1; i<= a; i++){
        res *= i;
    }
    return res;
}

// n
//  C  = n!/ (r!*(n-r)!)
//   r 

int calcCombination(int n, int r) {
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main (){
    cout<< calcCombination(10, 7); 
}