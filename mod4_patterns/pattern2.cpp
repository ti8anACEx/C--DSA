/*
for n = 5, it prints

1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
21      22      23      24      25
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: " << endl;
    cin>>n;

    for (int i = 1; i <= n; i++){ // iterating rows
        for (int j = 1; j <= n; j++){ // iterating cols
            cout << j + (n*(i-1)) << '\t'; 
        }
        cout << endl;
    }

    // OR CANN DIRECTLY PRINT BY RUNNING A COUNT VARIABLE

    int count = 1;

    for (int i = 0; i < n*n; i++, count++) { // only onw loop! as n*n is used
        if (i%n == 0){
            cout << endl;
        }
        cout << count << '\t';
    }
    cout << endl;

    // OR USE TWO LOOPS like this
    count = 1;

    for (int i = 1; i <= n; i++){ // iterating rows
        for (int j = 1; j <= n; j++, count++){ // iterating cols
            cout << count << '\t';
        }
        cout << endl;
    }

}
