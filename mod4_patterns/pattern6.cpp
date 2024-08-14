#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: " << endl;
    cin>>n;


    for (int i = 1; i <= n; i++){
        for (int j = i; j >= 1; j--){
            cout << j << '\t';
        }
        cout  << endl;
    }

    // OR CAN USE

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << i-j+1 << '\t';
        }
        cout  << endl;
    }
}

/*
for n = 5

1
2       1
3       2       1
4       3       2       1
5       4       3       2       1
*/