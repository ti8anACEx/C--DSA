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
                cout << j << '\t';

        }
        cout  << endl;
    }
}


/*
for n = 5


1       2       3       4       5
        2       3       4       5
                3       4       5
                        4       5
                                5
*/