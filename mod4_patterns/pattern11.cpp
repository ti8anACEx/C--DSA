#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: " << endl;
    cin>>n;


    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << char('A'-1 + n - i  + j)   << '\t';
        }
        cout  << endl;
    }
}

/*
Approach
first -> cout << n - i + 1 + j - 1 << '\t'; 
------- n - i + 1 gives the pattern of first column of every row
------- + j - 1 gives the pattern of next available column of every row

now  n - i + 1 + j - 1 = n - i + j

now mapping!
'A'-1 + n - i  + j
and char('A'-1 + n - i  + j)

*/

/*
for n = 4, it gives

D
C       D
B       C       D
A       B       C       D

*/