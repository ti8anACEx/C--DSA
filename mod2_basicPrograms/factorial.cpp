#include<iostream>
using namespace std;

int main(){
    int fac = 1;
    int n = 5;

    for (int i = 1; i <= n; i++){
        fac*=i;
    }

    // OR

    //  for (int i = n; i > 0; i--){
    //     fac*=i;
    // }

    cout << fac << endl;
}