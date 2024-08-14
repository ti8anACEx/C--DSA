// this is like pattern4.cpp

#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;

    char count = 'A';

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++, count++){
            cout << count << '\t';
        }
        cout  << endl;
    }
}

/*
for n = 5 

A
B       C
D       E       F
G       H       I       J
K       L       M       N       O
*/