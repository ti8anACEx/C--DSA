#include<iostream>
using namespace std;

int main(){
     int n;
    cout << "Enter n: " << endl;
    cin>>n;

    for (int rows = 1; rows <= n; rows++){
        for (int cols = 1; cols <= rows; cols++){
            cout << rows << '\t';
        }
        cout << endl;
    }
}

/*
for n =5;

1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
*/