#include<iostream>
using namespace std;

int main(){
    int x = 3*4-1;
    string word = "hello";

    // only integral, chars and enums allowed, no floar and string
    switch(x){
        case 1:
            cout << 1 << endl;
            break;
        
        case 2:
            cout << 2 << endl;
            break;

        case 11:
            cout << 11 << endl;
            break;

        default:
            cout << "no value" << endl;

    }


    return 0;
}