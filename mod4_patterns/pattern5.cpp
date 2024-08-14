#include<iostream>
using namespace std;

    
int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;


    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            cout << j + i - 1 << '\t';
        }
        cout  << endl;
    }

}

/*
for rows = 5

1
2       3
3       4       5
4       5       6       7
5       6       7       8       9
*/