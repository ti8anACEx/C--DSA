#include<iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter number of n: " << endl;
    cin>>n;

    char ch = 'A';

    for (int i = 1; i <= n; i++, ch++){
        for (int j = 1; j <= n; j++){
            cout << ch << '\t';
        }
        cout  << endl;
    }
}

/*
for n = 4

A       A       A       A
B       B       B       B
C       C       C       C
D       D       D       D
*/