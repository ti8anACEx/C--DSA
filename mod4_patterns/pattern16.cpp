#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: " << endl;
    cin>>rows;


    for (int i = 1; i <= rows; i++){
        for (int j = 1, k = 1; j <= (2*rows-1); j++){ // now iterating through 2n-1 cols

            if (j > rows-i && j < rows + i){ 
                if (j>=rows){
                    cout << k-- << '\t';
                }else{
                    cout << k++ << '\t';
                }
            }
            else 
                cout << " " << '\t';
    

        }
        cout  << endl;
    }

    // OR USE

    for (int i = 1; i <= rows; i++){
        // Print space (1st triangle)
        int space = rows - i;
        while(space){
            cout<<" "<<'\t';
            space--;
        }

        // print 2nd triangle
        for (int j = 1; j<=i; j++) cout << j << '\t';

        // print 3nd triangle
        int start = i - 1;
        while(start){
            cout<<start<<'\t';
            start--;
        }


        cout<<endl;
    }
    
}

/*
for n = 5

                                1                                
                        1       2       1                        
                1       2       3       2       1                
        1       2       3       4       3       2       1        
1       2       3       4       5       4       3       2       1
*/