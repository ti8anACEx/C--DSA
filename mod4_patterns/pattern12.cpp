#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;


    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows; j++){
            if (j > rows-i){ 
                cout << "*" << '\t';
            }
            else 
                cout << " " << '\t';

        }
        cout  << endl;
    }

    // OR USE

    int r = 1;
    while (r <= rows){
        //Print spaces
        int space = rows - r;
        while (space){
            cout << " " << '\t';
            space--;
        }
        //Print stars
        int c = 1;
        while (c <= r){
            cout << "*" << '\t';
            c++;
        }
        cout<<endl;
        r++;
    }
}

/*
for rows = 7

                                                *
                                        *       *
                                *       *       *
                        *       *       *       *
                *       *       *       *       *
        *       *       *       *       *       *
*       *       *       *       *       *       *
*/