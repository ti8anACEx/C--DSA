#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;


    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= (2*rows-1); j++){ // now iterating through 2n-1 cols

            if (j > rows-i && j < rows + i){ 
                cout << "*" << '\t';
            }
            else 
                cout << " " << '\t';
    

        }
        cout  << endl;
    }
}

/*
for n = 4

                        *                        
                *       *       *                
        *       *       *       *       *        
*       *       *       *       *       *       *

*/