#include <iostream>
using namespace std;

int main(){
    cout << " A formal for loop is running"<<endl;

    for (int i = 1; i <=10; i++){
        cout <<" iteration number "<< i<<endl;
    }

    // is same as
    
    int j = 1;
    for ( ; ; ){
        if (j<=10) cout <<" iteration number "<< j <<endl;
        else break;

        j++;
    }

    // is same as (with while loop)

    int k = 1;
    while (true){
        if (k<=10) cout <<" iteration number "<< k <<endl;
        else break;

        k++;
    }

    // is same as 

    int l = 1;
    while (l<=10){
        cout <<" iteration number "<< l <<endl;

        l++;
    }

}