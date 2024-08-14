#include<iostream>
using namespace std;

int main(){
    cout <<"Enter n";
    int n;
    cin >> n;

    for (int i = 1; i <= n;i++ ){
        for (int j = n; j >= 1; j-- ){
            cout<< j;
        }
        cout<< endl;
    }
}

/*
prints

54321
54321
54321
54321
54321s
*/