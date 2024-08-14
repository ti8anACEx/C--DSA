#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;

    for (int i = 1; i <= rows; i++){

        // print triangle 1

        for (int j = rows - i + 1, k=1 ; j >= 1; j--) {
            cout << k++ << '\t';
        }
        
        /*
        will do -> 

        1       2       3       4       5
        1       2       3       4
        1       2       3
        1       2
        1
        */


        // print triangle 2

        for (int j = 2; j <= i; j++) { // for 1st iteration condition must be false, so this is used
            cout << "*" << '\t';
        }

        /*
        will do ->

        1       2       3       4       5
        1       2       3       4       *
        1       2       3       *       *
        1       2       *       *       *
        1       *       *       *       *
        */


        // print triangle 3

        for (int j = 1; j <= i-1; j++) { // for 1st iteration condition must be false, so this is used
            cout << "*" << '\t';
        }

        /*
        will do ->

        1       2       3       4       5
        1       2       3       4       *       *
        1       2       3       *       *       *       *
        1       2       *       *       *       *       *       *
        1       *       *       *       *       *       *       *       *
        */


        // print traingle 4

        for (int j = rows - i + 1; j >= 1; j--) {
            cout << j << '\t';
        }

        cout << endl;
    }
}

/*
Lastly, we will get->

1       2       3       4       5       5       4       3       2       1
1       2       3       4       *       *       4       3       2       1
1       2       3       *       *       *       *       3       2       1
1       2       *       *       *       *       *       *       2       1
1       *       *       *       *       *       *       *       *       1
*/