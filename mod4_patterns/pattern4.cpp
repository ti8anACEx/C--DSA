#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;

    int count = 1;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++, count++){
            cout << count << '\t';
        }
        cout  << endl;
    }
}

/*
for rows = 4;

1
2       3
4       5       6
7       8       9       10
*/