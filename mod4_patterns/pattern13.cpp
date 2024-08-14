#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of n: " << endl;
    cin>>n;


    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j < i){ 
                cout << " " << '\t';
            }
            else 
                cout << "*" << '\t';

        }
        cout  << endl;
    }
}

/*
for n = 4


*       *       *       *
        *       *       *
                *       *
                        *
*/