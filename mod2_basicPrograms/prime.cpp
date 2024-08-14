#include<iostream>
using namespace std;

int main(){
    int n = 49;

    for (int i = 2; i*i <= n; i++){ // or do i < n, for less optimization or i < n/2, here its done sqrt
        if(n%i==0) {
            cout<<"Not prime, the number is div by say : "<<i<<endl;
            return 0; //break if collecctd a flag or return if its a standalone fn
        }
    }

    cout<<"The number is prime"<<endl;

    return 0;
}