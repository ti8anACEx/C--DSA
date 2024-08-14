
// This progranm is just like pattern5.cpp

#include<iostream>
using namespace std;

    
int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;


    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << char(('A' - 1) + j + i - 1) << '\t'; // explicit type casting with char()
        }
        cout  << endl;
    }

}

/*
for n = 5

A
B       C
C       D       E
D       E       F       G
E       F       G       H       I
*/